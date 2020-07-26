########################################################################
# Copyright (c) 1988-2020 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: libcola.pri
#
# Author: $author$
#   Date: 7/21/2020
#
# QtCreator .pri file for cola library libcola
########################################################################

########################################################################
# libcola

# libcola TARGET
#
libcola_TARGET = cola
libcola_TEMPLATE = lib
libcola_CONFIG += staticlib

# libcola INCLUDEPATH
#
libcola_INCLUDEPATH += \
$${cola_INCLUDEPATH} \

# libcola DEFINES
#
libcola_DEFINES += \
$${cola_DEFINES} \

########################################################################
# libcola OBJECTIVE_HEADERS
#
#libcola_OBJECTIVE_HEADERS += \
#$${COLA_SRC}/cola/base/Base.hh \

# libcola OBJECTIVE_SOURCES
#
#libcola_OBJECTIVE_SOURCES += \
#$${COLA_SRC}/cola/base/Base.mm \

########################################################################
# libcola HEADERS
#
libcola_HEADERS += \
$${COLA_SRC}/cola/base/Types.hpp \
$${COLA_SRC}/cola/base/Base.hpp \
$${COLA_SRC}/cola/base/Comparable.hpp \
$${COLA_SRC}/cola/base/CharSequence.hpp \
$${COLA_SRC}/cola/base/Object.hpp \
$${COLA_SRC}/cola/base/Throwable.hpp \
$${COLA_SRC}/cola/base/Exception.hpp \
$${COLA_SRC}/cola/base/RuntimeException.hpp \
$${COLA_SRC}/cola/base/IndexOutOfBoundsException.hpp \
$${COLA_SRC}/cola/base/String.hpp \
\
$${COLA_SRC}/cola/io/Serializable.hpp \

# libcola SOURCES
#
libcola_SOURCES += \
$${COLA_SRC}/cola/base/Types.hpp \
$${COLA_SRC}/cola/base/Base.cpp \
$${COLA_SRC}/cola/base/Comparable.cpp \
$${COLA_SRC}/cola/base/CharSequence.cpp \
$${COLA_SRC}/cola/base/Object.cpp \
$${COLA_SRC}/cola/base/Throwable.cpp \
$${COLA_SRC}/cola/base/Exception.cpp \
$${COLA_SRC}/cola/base/RuntimeException.cpp \
$${COLA_SRC}/cola/base/IndexOutOfBoundsException.cpp \
$${COLA_SRC}/cola/base/String.cpp \
\
$${COLA_SRC}/cola/io/Serializable.cpp \

########################################################################



