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
///   File: Types.hpp
///
/// Author: $author$
///   Date: 7/20/2020
///////////////////////////////////////////////////////////////////////
#ifndef COLA_BASE_TYPES_HPP
#define COLA_BASE_TYPES_HPP

#include "xos/base/to_string.hpp"
#include "xos/base/logger.hpp"

namespace cola {
namespace base {

typedef void* pointer_t;
typedef int8_t byte_t;
typedef int16_t short_t;
typedef int32_t int_t;
typedef int64_t long_t;
typedef float float_t;
typedef double double_t;
typedef bool boolean_t;

typedef ::xos::to_char_string cstring_t;
typedef ::xos::to_wchar_string wstring_t;
typedef wstring_t string_t;
typedef string_t::char_t char_t;
typedef string_t::string_t string_string_t;

} /// namespace base
} /// namespace cola

#endif /// ndef COLA_BASE_TYPES_HPP 
