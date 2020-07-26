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
///   File: main.cpp
///
/// Author: $author$
///   Date: 7/25/2020
///////////////////////////////////////////////////////////////////////
#include "cola/system/console/main.hpp"
#include "cola/base/ThrowableToString.hpp"
#include "xos/logger/mutex.hpp"
#include "xos/console/logger.cpp"
#include "xos/console/io.cpp"

namespace cola {
namespace system {
namespace console {

} /// namespace console
} /// namespace system
} /// namespace cola

/// main
int main(int argc, char** argv, char** env) {
    int err = 1;
    
    try {
        ::xos::logger::mutex mutex;

        try {
            LOGGING_LEVELS levels = DEFAULT_LOGGING_LEVELS;
            ::xos::console::logger logger(mutex);
    
            SET_LOGGING_LEVEL(levels);
            try {
        
                LOGGER_LOG_DEBUG("::cola::console::Main::main(argc, argv, env)...");
                err = ::cola::console::Main::main(argc, argv, env);
                SET_LOGGING_LEVEL(levels);
                LOGGER_LOG_DEBUG("..." << err << " = ::cola::console::Main::main(argc, argv, env)");
            } catch (const ::cola::base::Throwable& t) {
                SET_LOGGING_LEVEL(levels);
                LOGGER_LOG_ERROR("...catch (const ::cola::base::Throwable& t = \"" << ::cola::base::ThrowableToCString(t).chars() << "\")");
            } catch (const ::xos::exception& e) {
                SET_LOGGING_LEVEL(levels);
                LOGGER_LOG_ERROR("...catch (const ::xos::exception& e = \"" << ::xos::exception_to_string(e).chars() << "\")");
            } catch (...) {
                SET_LOGGING_LEVEL(levels);
                LOGGER_LOG_ERROR("...catch (...)");
            } /// try
            SET_LOGGING_LEVEL(levels);
        } catch (const ::cola::base::Throwable& t) {
        } catch (const ::xos::exception& e) {
        } catch (...) {
        } /// try
    } catch (const ::cola::base::Throwable& t) {
    } catch (const ::xos::exception& e) {
    } catch (...) {
    } /// try
    return err;
} /// main