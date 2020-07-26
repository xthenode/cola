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
///   File: Throwable.hpp
///
/// Author: $author$
///   Date: 7/23/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_BASE_THROWABLE_HPP
#define COLA_BASE_THROWABLE_HPP

#include "cola/base/Object.hpp"
#include "cola/io/Serializable.hpp"

namespace cola {
namespace base {

/// class String
class exported String;

/// class Throwable
class exported Throwable;

namespace extended {
/// class Throwablet
template <class TExtends = Object, class TImplements = io::Serializable>
class exported Throwablet: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef Throwablet derives;

    /// constructor / destructor
    Throwablet(const String& message, const Throwablet& cause): message_(0), cause_(0)  {
    }
    Throwablet(const String& message): message_(0), cause_(0)  {
    }
    Throwablet(const Throwable& cause): message_(0), cause_(0) {
    }
    Throwablet(const Throwablet& copy): message_(0), cause_(0) {
    }
    Throwablet(): message_(0), cause_(0)  {
    }
    virtual ~Throwablet() {
    }
    
    /// ...message... / ...cause...
    virtual const char_t* messageChars() const {
        const char_t* chars = 0;
        return chars;
    }
    virtual const String* message() const {
        return message_;
    }
    virtual const char_t* causeChars() const {
        const char_t* chars = 0;
        return chars;
    }
    virtual const Throwable* cause() const {
        return cause_;
    }

protected:
    /// construct
    virtual derives& construct(const String& message, const Throwable& cause) {
        return *this;
    }
    virtual derives& construct(const String& message) {
        return *this;
    }
    virtual derives& construct(const Throwable& cause) {
        return *this;
    }
    virtual derives& construct() {
        return *this;
    }
    virtual derives& destruct() {
        return *this;
    }

protected:
    String* message_;
    Throwable* cause_;
}; /// class Throwablet
typedef Throwablet<> Throwable;
typedef Throwable::implements ThrowableImplements;
typedef Throwable::extends ThrowableExtends;
} /// namespace extended

/// class Throwable
class exported Throwable: virtual public extended::ThrowableImplements, public extended::Throwable {
public:
    typedef extended::ThrowableImplements implements;
    typedef extended::Throwable extends;
    typedef Throwable derives;

    /// constructor / destructor
    Throwable(const String& message, const Throwable& cause): extends(message, cause) {
        this->construct(message, cause);
    }
    Throwable(const String& message): extends(message) {
        this->construct(message);
    }
    Throwable(const Throwable& cause): extends(cause) {
        this->construct(cause);
    }
    Throwable() {
        this->construct();
    }
    virtual ~Throwable() {
        this->destruct();
    }
    
    /// get...
    virtual String getMessage() const;
    
    /// ...message... / ...cause...
    virtual cstring_t messageToCString() const {
        const char_t* chars = 0;
        cstring_t to;
        if ((chars = messageChars())) {
            to.append(chars);
        }
        return to;
    }
    virtual const char_t* messageChars() const ;
    virtual const char_t* causeChars() const {
        const char_t* chars = 0;
        if (cause_) {
            chars = cause_->messageChars();
        }
        return chars;
    }

protected:
    /// construct
    virtual derives& construct(const String& message, const Throwable& cause);
    virtual derives& construct(const String& message);
    virtual derives& construct(const Throwable& cause);
    virtual derives& construct();
    virtual derives& destruct();
}; /// class Throwable

} /// namespace base
} /// namespace cola

#endif /// ndef COLA_BASE_THROWABLE_HPP 
