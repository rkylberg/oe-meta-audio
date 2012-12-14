DESCRIPTION = "Pure Data is an embeddable audio synthesis library"
HOMEPAGE = "http://libpd.cc/"
LICENSE = "BSD-3-Clause"
SRC_URI = "git://github.com/${PN}/${PN}.git;protocol=git"
SRCREV = "febda6335da5f32b3f0806bed31f2f7aeb788fce"
PD_VERSION = "0.43.1"
PV = "${PD_VERSION}-febda63"
S = "${WORKDIR}/git"

LIC_FILES_CHKSUM = "file://${S}/LICENSE.txt;md5=ef3d3f3acede8823822519f658e24cc6"

CFLAGS_append = " -I./pure-data/src -I./libpd_wrapper -DPD -DHAVE_UNISTD_H -DUSEAPI_DUMMY -DHAVE_LIBDL -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast -fPIC -O3"
LDFLAGS_append = " -shared -ldl -Wl,-Bsymbolic"

#do_configure() {
#  #oe_runmake clean
#}

do_compile() {
  oe_runmake clean
  oe_runmake libpd
}

do_install() {
  #install -d ${STAGING_INCDIR}/pd/
  #install -m 0644 libpd_wrapper/*.h ${STAGING_INCDIR}/pd/
  #install -m 0644 pure-data/src/*.h ${STAGING_INCDIR}/pd/
  #oe_libinstall -C libs/ ${PN} ${STAGING_LIBDIR}
  mv libs/${PN}.so libs/${PN}.so.${PD_VERSION}
  ln libs/${PN}.so.${PD_VERSION} libs/${PN}.so
  oe_libinstall -C libs/ ${PN} ${D}/${libdir}/
}

#FILES_${PN}-dev = "${libdir}/libpd.so"
