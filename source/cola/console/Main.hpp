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
#ifndef COLA_CONSOLE_MAIN_HPP
#define COLA_CONSOLE_MAIN_HPP

#include "cola/console/Arguments.hpp"

namespace cola {
namespace console {

/// class Maint
template <class TExtends = base::Object, class TImplements = typename TExtends::implements>
class exported Maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef Maint derives;

    /// constructor / destructor
    Maint() {
        derives*& theMain = derives::theMain();
        if ((theMain)) {
            throw ::xos::exception(::xos::exception_exists);
        } else {
            theMain = this;
        }
    }
    virtual ~Maint() {
        derives*& theMain = derives::theMain();
        if ((theMain)) {
            if ((theMain != this)) {
                throw ::xos::exception(::xos::exception_unexpected);
            } else {
                theMain = 0;
            }
        } else {
            throw ::xos::exception(::xos::exception_exist);
        }
    }
private:
    Maint(const Maint& copy): extends(copy) {
    }

protected:
    /// ...run
    virtual int run(base::String* args) {
        int err = 0;
        return err;
    }
    virtual int beforeRun(base::String* args) {
        int err = 0;
        return err;
    }
    virtual int afterRun(base::String* args) {
        int err = 0;
        return err;
    }
    virtual int allRun(base::String* args) {
        int err = 0;
        if (!(err = beforeRun(args))) {
            int err2 = 0;
            err = run(args);
            if ((err2 = afterRun(args))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    
    /// ...run
    virtual int run(int argc, char** argv, char** env) {
        Arguments arguments(argc, argv);
        int err = allRun(arguments.args());
        return err;
    }
    virtual int beforeRun(int argc, char** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int afterRun(int argc, char** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int allRun(int argc, char** argv, char** env) {
        int err = 0;
        if (!(err = beforeRun(argc, argv, env))) {
            int err2 = 0;
            err = run(argc, argv, env);
            if ((err2 = afterRun(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    
    /// before / after / operator()
    virtual int before(int argc, char** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after(int argc, char** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int operator()(int argc, char** argv, char** env) {
        int err = 0;
        if (!(err = before(argc, argv, env))) {
            int err2 = 0;
            err = allRun(argc, argv, env);
            if ((err2 = after(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    
public:
    /// main
    static int main(int argc, char** argv, char** env) {
        derives* theMain = 0;
        int err = 1;
        if ((theMain = derives::theMain())) {
            err = (*theMain)(argc, argv, env);
        } else {
            LOGGER_LOG_ERROR("...0 = derives::theMain()");
        }
        return err;
    }
protected:
    static derives*& theMain() {
        static derives* theMain = 0;
        return theMain;
    }
}; /// class Maint
typedef Maint<> Main;

} /// namespace console
} /// namespace cola

#endif /// ndef COLA_CONSOLE_MAIN_HPP 
