DESCRIPTION = "Pure Data: real-time music and multimedia environment"
HOMEPAGE = "http://crca.ucsd.edu/~msp/software.html"
LICENSE = "BSD-3-Clause"
SRC_URI = "git://pure-data.git.sourceforge.net/gitroot/pure-data/pure-data;protocol=git"

S = "${WORKDIR}/git/"

LIC_FILES_CHKSUM = "file://${S}/LICENSE.txt;md5=ef3d3f3acede8823822519f658e24cc6"
inherit autotools gettext
DEPENDS = "alsa-lib"
RDEPENDS = "alsa-lib"
EXTRA_OECONF = "--disable-tk --enable-alsa"

do_patch () {
  mkdir -p ${S}/m4/generated
}

FILES_${PN}-dbg += "${libdir}/pd/bin/.debug/* ${libdir}/pd/extra/*/.debug/*.pd_linux"
