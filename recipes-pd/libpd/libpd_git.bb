DESCRIPTION = "Pure Data is an embeddable audio synthesis library"
HOMEPAGE = "http://libpd.cc/"
LICENSE = "BSD-3-Clause"
SRC_URI = "git://github.com/${PN}/${PN}.git;protocol=git"
SRCREV = "febda6335da5f32b3f0806bed31f2f7aeb788fce"
PV = "febda6335d"
S = "${WORKDIR}/git"

LIC_FILES_CHKSUM = "file://${S}/LICENSE.txt;md5=ef3d3f3acede8823822519f658e24cc6"

do_compile() {
  ${MAKE}
}

do_install() {
  install -d ${D}${bindir}
  install -m 0755 libs/libpd.so ${D}${libdir}
}
