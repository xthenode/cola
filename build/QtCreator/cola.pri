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
# Build specific QtCreator .pri file for cola
########################################################################
UNAME = $$system(uname)

contains(UNAME,Uname) {
BUILD_OS = COLA_OS
} else {
BUILD_OS = os
} # contains(UNAME,Uname)

#BUILD_CPP_VERSION = 11

########################################################################
# nadir
#
# pkg-config --cflags --libs nadir
#

# build nadir INCLUDEPATH
#
build_nadir_INCLUDEPATH += \

# build nadir DEFINES
#
build_nadir_DEFINES += \

# build nadir FRAMEWORKS
#
build_nadir_FRAMEWORKS += \

# build nadir LIBS
#
build_nadir_LIBS += \

########################################################################
# cifra
#
# pkg-config --cflags --libs cifra
#

# build cifra INCLUDEPATH
#
build_cifra_INCLUDEPATH += \

# build cifra DEFINES
#
build_cifra_DEFINES += \

# build cifra FRAMEWORKS
#
build_cifra_FRAMEWORKS += \

# build cifra LIBS
#
build_cifra_LIBS += \

########################################################################
# rete
#
# pkg-config --cflags --libs rete
#

# build rete INCLUDEPATH
#
build_rete_INCLUDEPATH += \

# build rete DEFINES
#
build_rete_DEFINES += \

# build rete FRAMEWORKS
#
build_rete_FRAMEWORKS += \

# build rete LIBS
#
build_rete_LIBS += \

########################################################################
# stara
#
# pkg-config --cflags --libs stara
#

# build stara INCLUDEPATH
#
build_stara_INCLUDEPATH += \

# build stara DEFINES
#
build_stara_DEFINES += \

# build stara FRAMEWORKS
#
build_stara_FRAMEWORKS += \

# build stara LIBS
#
build_stara_LIBS += \

########################################################################
# cola

# build cola INCLUDEPATH
#
build_cola_INCLUDEPATH += \
$${build_stara_INCLUDEPATH} \
$${build_rete_INCLUDEPATH} \
$${build_cifra_INCLUDEPATH} \
$${build_nadir_INCLUDEPATH} \


# build cola DEFINES
#
build_cola_DEFINES += \
$${build_nadir_DEFINES} \
$${build_cifra_DEFINES} \
$${build_rete_DEFINES} \
$${build_stara_DEFINES} \


# build cola FRAMEWORKS
#
build_cola_FRAMEWORKS += \
$${build_stara_FRAMEWORKS} \
$${build_rete_FRAMEWORKS} \
$${build_cifra_FRAMEWORKS} \
$${build_nadir_FRAMEWORKS} \


# build cola LIBS
#
build_cola_LIBS += \
$${build_stara_LIBS} \
$${build_rete_LIBS} \
$${build_cifra_LIBS} \
$${build_nadir_LIBS} \


