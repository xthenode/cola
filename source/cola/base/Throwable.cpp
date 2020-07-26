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
///   File: Throwable.cpp
///
/// Author: $author$
///   Date: 7/23/2020
///////////////////////////////////////////////////////////////////////
#include "cola/base/Throwable.hpp"
#include "cola/base/String.hpp"

namespace cola {
namespace base {

/// class Throwable

/// Throwable::get...
String Throwable::getMessage() const {
    const char_t* chars = 0;
    String message;
    if ((chars = messageChars())) {
        message.append(chars);
    }
    return message;
}

/// Throwable::...message...
const char_t* Throwable::messageChars() const {
    const String* message = 0;
    const char_t* chars = 0;
    if ((message = this->message())) {
        chars = message->chars();
    }
    return chars;
}

/// Throwable::construct / destruct
Throwable::derives& Throwable::construct(const String& message, const Throwable& cause) {
    const String* causeMessage = 0;
    const Throwable* causeCause = 0;
    message_ = new String(message);
    if ((causeMessage = cause.message())) {
        if ((causeCause = cause.cause())) {
            cause_ = new Throwable(*causeMessage, *causeCause);
        } else {
            cause_ = new Throwable(*causeMessage);
        }
    } else {
        if ((causeCause = cause.cause())) {
            cause_ = new Throwable(*causeCause);
        } else {
            cause_ = new Throwable();
        }
    }
    return *this;
}
Throwable::derives& Throwable::construct(const String& message) {
    message_ = new String(message);
    return *this;
}
Throwable::derives& Throwable::construct(const Throwable& cause) {
    const String* causeMessage = 0;
    const Throwable* causeCause = 0;
    if ((causeMessage = cause.message())) {
        if ((causeCause = cause.cause())) {
            cause_ = new Throwable(*causeMessage, *causeCause);
        } else {
            cause_ = new Throwable(*causeMessage);
        }
    } else {
        if ((causeCause = cause.cause())) {
            cause_ = new Throwable(*causeCause);
        } else {
            cause_ = new Throwable();
        }
    }
    return *this;
}
Throwable::derives& Throwable::construct() {
    return *this;
}
Throwable::derives& Throwable::destruct() {
    if (message_) {
        delete message_;
        message_ = 0;
    }
    if (cause_) {
        delete cause_;
        cause_ = 0;
    }
    return *this;
}

} /// namespace base
} /// namespace cola
