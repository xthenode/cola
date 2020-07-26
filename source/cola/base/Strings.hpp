///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2020 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: Strings.hpp
///
/// Author: $author$
///   Date: 7/26/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_BASE_STRINGS_HPP
#define COLA_BASE_STRINGS_HPP

#include "cola/base/String.hpp"
#include "xos/base/array.hpp"

namespace cola {
namespace base {

/// class Stringst
template <class TExtends = ::xos::arrayt<String>, class TImplements = typename TExtends::implements>
class exported Stringst: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef Stringst derives;

    typedef String element_t;

    /// constructor / destructor
    Stringst(const element_t* elements, size_t length, bool isEnd = false) {
        append(elements, length, isEnd);
    }
    Stringst(const element_t& element, bool isEnd = false) {
        append(element, isEnd);
    }
    Stringst(bool isEnd = false) {
        if (isEnd) {
            appendEnd();
        }
    }
    virtual ~Stringst() {
    }
private:
    Stringst(const Stringst& copy) {
    }
public:

    /// ...assign... / ...append... / ...clear..
    using extends::assign;
    virtual derives& assign(const element_t* elements, size_t length, bool isEnd = false) {
        clear();
        append(elements, length, isEnd);
        return *this;
    }
    virtual derives& assign(const element_t& element, bool isEnd = false) {
        clear();
        append(element, isEnd);
        return *this;
    }
    virtual derives& assignEnd() {
        clear();
        appendEnd();
        return *this;
    }
    using extends::append;
    virtual derives& append(const element_t* elements, size_t length, bool isEnd = false) {
        extends::append(elements, length);
        if (isEnd) {
            appendEnd();
        }
        return *this;
    }
    virtual derives& append(const element_t& element, bool isEnd = false) {
        append(&element, 1, isEnd);
        return *this;
    }
    virtual derives& appendEnd() {
        extends::append(&end_, 1);
        return *this;
    }
    virtual size_t clear() {
        size_t count = extends::clear();
        return count;
    }

protected:
    element_t end_;
}; /// class Stringst
typedef Stringst<> Strings;

} /// namespace base
} /// namespace cola

#endif /// ndef COLA_BASE_STRINGS_HPP 
