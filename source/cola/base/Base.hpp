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
///   File: Base.hpp
///
/// Author: $author$
///   Date: 7/21/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_BASE_BASE_HPP
#define COLA_BASE_BASE_HPP

#include "cola/base/Types.hpp"

namespace cola {
namespace base {

/// class Implementt
template <class TImplements = xos::implement>
class exported Implementt: virtual public TImplements {
public:
    typedef TImplements implements;
    typedef Implementt derives;

    /// constructor / destructor
    virtual ~Implementt() {
    }
    /// isNull
    virtual bool isNull() const {
        return false;
    }
}; /// class Implementt
typedef Implementt<> Implement;

/// class Extendt
template <class TExtends = xos::extend, class TImplements = typename TExtends::implements>
class exported Extendt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef Extendt derives;

    /// constructor / destructor
    Extendt(const Extendt& copy): extends(copy) {
    }
    Extendt() {
    }
    virtual ~Extendt() {
    }
}; /// class Extendt
typedef Extendt<> Extend;

} /// namespace base
} /// namespace cola

#endif /// ndef COLA_BASE_BASE_HPP 
