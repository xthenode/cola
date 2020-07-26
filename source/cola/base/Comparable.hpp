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
///   File: Comparable.hpp
///
/// Author: $author$
///   Date: 7/21/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_BASE_COMPARABLE_HPP
#define COLA_BASE_COMPARABLE_HPP

#include "cola/base/Base.hpp"

namespace cola {
namespace base {

class exported String;

/// class Comparablet
template <typename TTo = pointer_t, class TImplements = base::Implement>
class exported Comparablet: virtual public TImplements {
public:
    typedef TImplements implements;
    typedef Comparablet derives;

    /// constructor / destructor
    virtual ~Comparablet() {
    }
    /// compareTo
    virtual int_t compareTo(const TTo& to) const = 0;
}; /// class Comparablet

typedef Comparablet<> Comparable;

/// class CaseComparablet
template <typename TTo = char_t, class TExtends = Comparablet<TTo>, class TImplements = typename TExtends::implements>
class exported CaseComparablet: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef CaseComparablet derives;

    /// constructor / destructor
    virtual ~CaseComparablet() {
    }
    /// compareToIgnoreCase
    virtual int_t compareToIgnoreCase(const TTo& to) const = 0;
}; /// class CaseComparablet
typedef CaseComparablet<> CaseComparable;

typedef CaseComparablet<char_t> CharComparable;
typedef CaseComparablet<String> StringComparable;

} /// namespace base
} /// namespace cola

#endif /// ndef COLA_BASE_COMPARABLE_HPP 
