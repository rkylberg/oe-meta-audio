FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_beaglebone = " \
  file://add-static-capes.diff \
  file://snd.cfg \
  file://snd.scc \
"

KERNEL_DEVICETREE_append_beaglebone = " am335x-bone-audio-02-00A0.dtb"

KERNEL_MODULE_AUTOLOAD_append_beaglebone = "snd-soc-tlv320aic3x"
KERNEL_FEATURES_append_beaglebone = "snd.scc"

##do_install_prepend() {
##  cp ${WORKDIR}/BB-BONE-AUDI-02-00A0.dts ${WORKDIR}/linux/arch/${ARCH}/boot/dts/
##}
