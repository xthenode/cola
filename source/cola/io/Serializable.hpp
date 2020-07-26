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
///   File: Serializable.hpp
///
/// Author: $author$
///   Date: 7/21/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_IO_SERIALIZABLE_HPP
#define COLA_IO_SERIALIZABLE_HPP

#include "cola/base/Base.hpp"

namespace cola {
namespace io {

/// class Serializablet
template <class TImplements = base::Implement>
class exported Serializablet: virtual public TImplements {
public:
    typedef TImplements implements;
    typedef Serializablet derives;

    /// constructor / destructor
    virtual ~Serializablet() {
    }
}; /// class Serializablet
typedef Serializablet<> Serializable;

} /// namespace io
} /// namespace cola

#endif /// ndef COLA_IO_SERIALIZABLE_HPP 
