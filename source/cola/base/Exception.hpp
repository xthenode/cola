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
///   File: Exception.hpp
///
/// Author: $author$
///   Date: 7/23/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_BASE_EXCEPTION_HPP
#define COLA_BASE_EXCEPTION_HPP

#include "cola/base/Throwable.hpp"

namespace cola {
namespace base {

/// class Exceptiont
template <class TExtends = Throwable, class TImplements = typename TExtends::implements>
class exported Exceptiont: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef Exceptiont derives;

    /// constructor / destructor
    Exceptiont(const Exceptiont& copy): extends(copy) {
    }
    Exceptiont() {
    }
    virtual ~Exceptiont() {
    }
}; /// class Exceptiont
typedef Exceptiont<> Exception;

} /// namespace base
} /// namespace cola

#endif /// ndef COLA_BASE_EXCEPTION_HPP 
