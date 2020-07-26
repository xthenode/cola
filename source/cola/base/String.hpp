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
///   File: String.hpp
///
/// Author: $author$
///   Date: 7/21/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_BASE_STRING_HPP
#define COLA_BASE_STRING_HPP

#include "cola/io/Serializable.hpp"
#include "cola/base/Base.hpp"
#include "cola/base/Comparable.hpp"
#include "cola/base/CharSequence.hpp"
#include "cola/base/Object.hpp"
#include "cola/base/IndexOutOfBoundsException.hpp"

namespace cola {
namespace base {

namespace implemented {
class exported String
: virtual public io::Serializable, virtual public StringComparable,  
  virtual public CharComparable,  virtual public CharSequence,  
  virtual public ObjectImplements {
public:
}; /// class String
} ///namespace implemented

namespace extended {
/// class Stringt
template <class TExtends = Extend, class TImplements = implemented::String>
class exported Stringt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef Stringt derives;

    /// constructor / destructor
    Stringt(const wchar_t* copy): wrapped_(copy) {
    }
    Stringt(const char* copy): wrapped_(copy) {
    }
    Stringt(const cstring_t& copy): wrapped_(copy) {
    }
    Stringt(const string_t& copy): wrapped_(copy) {
    }
    Stringt(const string_string_t& copy): wrapped_(copy) {
    }
    Stringt(const Stringt& copy): wrapped_(copy.wrapped_) {
    }
    Stringt() {
    }
    virtual ~Stringt() {
    }
    
    /// assign
    virtual derives& assign(const derives& to) {
        wrapped_.assign(to.wrapped_);
        return *this;
    }
    virtual derives& assign(const wchar_t* to, size_t length) {
        wrapped_.assign(to, length);
        return *this;
    }
    virtual derives& assign(const char* to, size_t length) {
        wrapped_.assign(to, length);
        return *this;
    }
    virtual derives& assign(const wchar_t* to) {
        wrapped_.assign(to);
        return *this;
    }
    virtual derives& assign(const char* to) {
        wrapped_.assign(to);
        return *this;
    }
    virtual derives& assign(const wchar_t& to) {
        wrapped_.assign(&to);
        return *this;
    }
    virtual derives& assign(const char& to) {
        wrapped_.assign(&to);
        return *this;
    }

    /// append
    virtual derives& append(const derives& to) {
        wrapped_.append(to.wrapped_);
        return *this;
    }
    virtual derives& append(const wchar_t* to, size_t length) {
        wrapped_.append(to, length);
        return *this;
    }
    virtual derives& append(const char* to, size_t length) {
        wrapped_.append(to, length);
        return *this;
    }
    virtual derives& append(const wchar_t* to) {
        wrapped_.append(to);
        return *this;
    }
    virtual derives& append(const char* to) {
        wrapped_.append(to);
        return *this;
    }
    virtual derives& append(const wchar_t& to) {
        wrapped_.append(&to);
        return *this;
    }
    virtual derives& append(const char& to) {
        wrapped_.append(&to);
        return *this;
    }

    /// hasChars / chars
    virtual const char_t* hasChars(size_t& length) const {
        return wrapped_.has_chars(length);
    }
    virtual const char_t* hasChars() const {
        return wrapped_.has_chars();
    }
    virtual const char_t* chars(size_t& length) const {
        return wrapped_.chars(length);
    }
    virtual const char_t* chars() const {
        return wrapped_.chars();
    }

    /// ...Comparable::...
    virtual int_t compareTo(const char_t& to) const {
        int_t unequal = wrapped_.compare(&to);
        return unequal;
    }
    virtual int_t compareToIgnoreCase(const char_t& to) const {
        int_t unequal = wrapped_.uncased_compare(&to);
        return unequal;
    }

    /// CharSequence::...
    virtual char_t charAt(int_t index) const {
        int_t len = (int_t)(wrapped_.length());
        char_t c = 0;
        if ((index >= 0) && (index < len))
            return wrapped_.at(index);
        return c;
    }
    virtual int_t length() const {
        int_t len = (int_t)(wrapped_.length());
        return len;
    }

protected:
    string_t wrapped_;
}; /// class Stringt
typedef Stringt<> String;
typedef String::extends StringExtends;
typedef String::implements StringImplements;
} /// namespace extended

/// class String
class exported String: virtual public extended::StringImplements, public extended::String {
public:
    typedef extended::StringImplements implements;
    typedef extended::String extends;
    typedef String derives;

    /// constructor / destructor
    String(const wchar_t* copy): extends(copy) {
    }
    String(const char* copy): extends(copy) {
    }
    String(const cstring_t& copy): extends(copy) {
    }
    String(const string_t& copy): extends(copy) {
    }
    String(const string_string_t& copy): extends(copy) {
    }
    String(const String& copy): extends(copy) {
    }
    String() {
    }
    virtual ~String() {
    }

    /// assign
    virtual derives& assign(const derives& to) {
        extends::assign(to);
        return *this;
    }
    virtual derives& assign(const wchar_t* to, size_t length) {
        extends::assign(to, length);
        return *this;
    }
    virtual derives& assign(const char* to, size_t length) {
        extends::assign(to, length);
        return *this;
    }
    virtual derives& assign(const wchar_t* to) {
        extends::assign(to);
        return *this;
    }
    virtual derives& assign(const char* to) {
        extends::assign(to);
        return *this;
    }
    virtual derives& assign(const wchar_t& to) {
        extends::assign(to);
        return *this;
    }
    virtual derives& assign(const char& to) {
        extends::assign(to);
        return *this;
    }

    /// append
    virtual derives& append(const derives& to) {
        extends::append(to);
        return *this;
    }
    virtual derives& append(const wchar_t* to, size_t length) {
        extends::append(to, length);
        return *this;
    }
    virtual derives& append(const char* to, size_t length) {
        extends::append(to, length);
        return *this;
    }
    virtual derives& append(const wchar_t* to) {
        extends::append(to);
        return *this;
    }
    virtual derives& append(const char* to) {
        extends::append(to);
        return *this;
    }
    virtual derives& append(const wchar_t& to) {
        extends::append(to);
        return *this;
    }
    virtual derives& append(const char& to) {
        extends::append(to);
        return *this;
    }

    /// concat
    virtual String concat(const String& to) const {
        String string(*this);
        string.append(to);
        return string;
    }
    virtual String concat(const wchar_t* to, size_t length) const {
        String string(*this);
        string.append(to, length);
        return string;
    }
    virtual String concat(const char* to, size_t length) const {
        String string(*this);
        string.append(to, length);
        return string;
    }
    virtual String concat(const wchar_t* to) const {
        String string(*this);
        string.append(to);
        return string;
    }
    virtual String concat(const char* to) const {
        String string(*this);
        string.append(to);
        return string;
    }
    virtual String concat(const wchar_t& to) const {
        String string(*this);
        string.append(to);
        return string;
    }
    virtual String concat(const char& to) const {
        String string(*this);
        string.append(to);
        return string;
    }
    
    /// ...Comparable::...
    virtual int_t compareTo(const String& to) const {
        int_t unequal = this->wrapped_.compare(to.wrapped_);
        return unequal;
    }
    virtual int_t compareToIgnoreCase(const String& to) const {
        int_t unequal = this->wrapped_.uncased_compare(to.wrapped_);
        return unequal;
    }

    /// CharSequence::...
    virtual String subSequence(int_t start, int_t end) const {
        int_t len = (int_t)(this->wrapped_.length());
        if ((start >= 0) && (start < len) && (end >= start) && (end < len))
            return String(this->wrapped_.substr(start, end));
        return String();
    }
    virtual String toString() const {
        return String(*this);
    }
    virtual cstring_t toCString() const {
        return cstring_t(chars());
    }
    virtual wstring_t toWString() const {
        return wstring_t(chars());
    }
}; /// class String

} /// namespace base
} /// namespace cola

#endif /// ndef COLA_BASE_STRING_HPP 
