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
#   File: cola.pro
#
# Author: $author$
#   Date: 7/21/2020
#
# QtCreator .pro file for cola executable cola
########################################################################
include(../../../../../build/QtCreator/cola.pri)
include(../../../../QtCreator/cola.pri)
include(../../cola.pri)
include(../../../../QtCreator/app/cola/cola.pri)

TARGET = $${cola_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${cola_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${cola_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${cola_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${cola_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${cola_exe_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${cola_exe_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${cola_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${cola_exe_LIBS} \
$${FRAMEWORKS} \


