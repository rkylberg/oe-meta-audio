DESCRIPTION = "SuperCollider is a programming language for real time audio synthesis and algorithmic composition."
HOMEPAGE = "http://supercollider.github.io/"
LICENSE = "GPL-3.0"
SRC_URI = "gitsm://github.com/supercollider/supercollider;protocol=git;branch=3.6"

S = "${WORKDIR}/git/"

LIC_FILES_CHKSUM = "file://${S}/COPYING;md5=d32239bcb673463ab874e80d47fae504"

EXTRA_OECMAKE = "-DSC_QT=NO -DSC_WII=NO -DSC_EL=NO"
inherit cmake

DEPENDS = "fftw jack2 libsndfile1 alsa-lib"
RDEPENDS_${PN} = "libfftw3 jack2 libsndfile1"
