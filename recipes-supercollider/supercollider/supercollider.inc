DESCRIPTION = "SuperCollider is a programming language for real time audio synthesis and algorithmic composition."
HOMEPAGE = "http://supercollider.github.io/"
LICENSE = "GPL-3.0"

S = "${WORKDIR}/git/"

LIC_FILES_CHKSUM = "file://${S}/COPYING;md5=d32239bcb673463ab874e80d47fae504"

EXTRA_OECMAKE = "\
-DCMAKE_BUILD_TYPE="Release" \
-DBUILD_TESTING=OFF \
-DENABLE_TESTSUITE=OFF \
-DSSE=OFF \
-DSSE2=OFF \
-DNOVA_SIMD=ON \
-DNATIVE=OFF \
-DSC_QT=OFF \
-DSC_WII=OFF \
-DSC_ED=OFF \
-DSC_IDE=OFF \
-DSC_EL=OFF \
-DSYSTEM_BOOST=ON \
"

inherit cmake

DEPENDS = "fftw jack2 libsndfile1 alsa-lib boost"
RDEPENDS_${PN} = "libfftw3 jack2 libsndfile1 boost"

FILES_${PN} += " \
  ${libdir}/SuperCollider/plugins/*.so \
  ${datadir}/SuperCollider/SCClassLibrary/* \
  ${datadir}/SuperCollider/sounds* \
"

FILES_${PN}-dbg += " \
  ${libdir}/SuperCollider/plugins/.debug/*.so \
"

FILES_${PN}-dev += " \
  ${datadir}/scvim/* \
  ${datadir}/SuperCollider/Extensions/scvim/* \
  ${datadir}/vim/* \
  ${datadir}/mime/packages/supercollider.xml \
"

FILES_${PN}-doc += " \
  ${datadir}/SuperCollider/HelpSource/* \
  ${datadir}/SuperCollider/examples/* \
"
