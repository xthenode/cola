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
///   File: ThrowableToString.hpp
///
/// Author: $author$
///   Date: 7/25/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_BASE_THROWABLETOSTRING_HPP
#define COLA_BASE_THROWABLETOSTRING_HPP

#include "cola/base/Throwable.hpp"
#include "cola/base/String.hpp"

namespace cola {
namespace base {

/// class ThrowableToStringt
template <class TExtends = String, class TImplements = typename TExtends::implements>
class exported ThrowableToStringt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef ThrowableToStringt derives;

    /// constructor / destructor
    ThrowableToStringt(const Throwable& t): extends(t.messageToCString().chars()) {
    }
    ThrowableToStringt(const ThrowableToStringt& copy): extends(copy) {
    }
    ThrowableToStringt() {
    }
    virtual ~ThrowableToStringt() {
    }
}; /// class ThrowableToStringt

typedef ThrowableToStringt<> ThrowableToString;
typedef ThrowableToStringt<cstring_t> ThrowableToCString;
typedef ThrowableToStringt<wstring_t> ThrowableToWString;

} /// namespace base
} /// namespace cola

#endif /// ndef COLA_BASE_THROWABLETOSTRING_HPP 
