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
///   File: CharSequence.hpp
///
/// Author: $author$
///   Date: 7/21/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_BASE_CHARSEQUENCE_HPP
#define COLA_BASE_CHARSEQUENCE_HPP

#include "cola/base/Base.hpp"

namespace cola {
namespace base {

class exported String;

/// class CharSequencet
template <class TImplements = base::Implement>
class exported CharSequencet: virtual public TImplements {
public:
    typedef TImplements implements;
    typedef CharSequencet derives;

    /// constructor / destructor
    virtual ~CharSequencet() {
    }

    /// ...
    virtual char_t charAt(int_t index) const = 0;
    virtual int_t length() const = 0;
    virtual String subSequence(int_t start, int_t end) const = 0;
    virtual String toString() const = 0;
    virtual cstring_t toCString() const = 0;
    virtual wstring_t toWString() const = 0;
}; /// class CharSequencet
typedef CharSequencet<> CharSequence;

} /// namespace base
} /// namespace cola

#endif /// ndef COLA_BASE_CHARSEQUENCE_HPP 
