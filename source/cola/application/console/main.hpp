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
///   File: Main.hpp
///
/// Author: $author$
///   Date: 7/25/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_APPLICATION_CONSOLE_MAIN_HPP
#define COLA_APPLICATION_CONSOLE_MAIN_HPP

#include "cola/console/Main.hpp"

namespace cola {
namespace application {
namespace console {

/// class Maint
template <class TExtends = cola::console::Main, class TImplements = typename TExtends::implements>
class exported Maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef Maint derives;

    /// constructor / destructor
    Maint() {
    }
    virtual ~Maint() {
    }
private:
    Maint(const Maint& copy): extends(copy) {
    }
public:

}; /// class Maint
typedef Maint<> Main;

} /// namespace console
} /// namespace application
} /// namespace cola

#endif /// ndef COLA_APPLICATION_CONSOLE_MAIN_HPP 
