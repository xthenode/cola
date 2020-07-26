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
///   File: Arguments.hpp
///
/// Author: $author$
///   Date: 7/26/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_CONSOLE_ARGUMENTS_HPP
#define COLA_CONSOLE_ARGUMENTS_HPP

#include "cola/base/Strings.hpp"

namespace cola {
namespace console {

/// class Argumentst
template <class TExtends = cola::base::Object, class TImplements = typename TExtends::implements>
class exported Argumentst: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef Argumentst derives;

    /// constructor / destructor
    Argumentst(int argc, char** argv) {
        append(argc, argv);
    }
    Argumentst() {
    }
    virtual ~Argumentst() {
    }
private:
    Argumentst(const Argumentst& copy) {
    }
public:
    
    /// append
    virtual derives& append(int argc, char** argv) {
        if ((argc > 0) && (argv)) {
            const char* arg = 0;
            for (int argn = 0; argn < argc; ++argn) {
                if ((arg = argv[argn]) && (arg[0])) {
                    cola::base::String argString(arg);
                    strings_.append(argString);
                }
            }
        }
        strings_.appendEnd();
        return *this;
    }
    
    /// args
    virtual cola::base::String* args(size_t& length) const {
        return strings_.elements(length);
    }
    virtual cola::base::String* args() const {
        return strings_.elements();
    }

protected:
    cola::base::Strings strings_;
}; /// class Argumentst
typedef Argumentst<> Arguments;

} /// namespace console
} /// namespace cola

#endif /// ndef COLA_CONSOLE_ARGUMENTS_HPP 
