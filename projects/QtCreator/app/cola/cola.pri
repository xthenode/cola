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
#   File: cola.pri
#
# Author: $author$
#   Date: 7/21/2020
#
# QtCreator .pri file for cola executable cola
########################################################################

########################################################################
# cola

# cola_exe TARGET
#
cola_exe_TARGET = cola

# cola_exe INCLUDEPATH
#
cola_exe_INCLUDEPATH += \
$${cola_INCLUDEPATH} \

# cola_exe DEFINES
#
cola_exe_DEFINES += \
$${cola_DEFINES} \

########################################################################
# cola_exe OBJECTIVE_HEADERS
#
#cola_exe_OBJECTIVE_HEADERS += \
#$${COLA_SRC}/cola/base/Base.hh \

# cola_exe OBJECTIVE_SOURCES
#
#cola_exe_OBJECTIVE_SOURCES += \
#$${COLA_SRC}/cola/base/Base.mm \

########################################################################
# cola_exe HEADERS
#
cola_exe_HEADERS += \
$${COLA_SRC}/cola/base/Strings.hpp \
$${COLA_SRC}/cola/console/Arguments.hpp \
$${COLA_SRC}/cola/console/Main.hpp \
$${COLA_SRC}/cola/application/console/Main.hpp \
$${COLA_SRC}/cola/application/console/cola/Main.hpp \
$${COLA_SRC}/cola/system/console/main.hpp \

# cola_exe SOURCES
#
cola_exe_SOURCES += \
$${COLA_SRC}/cola/base/Strings.cpp \
$${COLA_SRC}/cola/console/Arguments.cpp \
$${COLA_SRC}/cola/application/console/cola/Main.cpp \

########################################################################
# cola_exe FRAMEWORKS
#
cola_exe_FRAMEWORKS += \
$${cola_FRAMEWORKS} \

# cola_exe LIBS
#
cola_exe_LIBS += \
$${cola_LIBS} \


