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
///   File: RuntimeException.hpp
///
/// Author: $author$
///   Date: 7/23/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_BASE_RUNTIMEEXCEPTION_HPP
#define COLA_BASE_RUNTIMEEXCEPTION_HPP

#include "cola/base/Exception.hpp"

namespace cola {
namespace base {

/// class RuntimeExceptiont
template <class TExtends = Exception, class TImplements = typename TExtends::implements>
class exported RuntimeExceptiont: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef RuntimeExceptiont derives;

    /// constructor / destructor
    RuntimeExceptiont(const RuntimeExceptiont& copy): extends(copy) {
    }
    RuntimeExceptiont() {
    }
    virtual ~RuntimeExceptiont() {
    }
}; /// class RuntimeExceptiont
typedef RuntimeExceptiont<> RuntimeException;

} /// namespace base
} /// namespace cola

#endif /// ndef COLA_BASE_RUNTIMEEXCEPTION_HPP 
