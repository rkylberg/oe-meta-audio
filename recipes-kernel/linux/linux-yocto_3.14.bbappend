FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += " \
  file://BB-BONE-AUDI-02-00A0.dts \
  file://snd.scc \
"
#SRC_URI += "${@base_contains('MACHINE', 'beaglebone', 'file://BB-BONE-AUDI-02-00A0.dts', '', d)}"
#KERNEL_DEVICETREE_append = " BB-BONE-AUDI-02-00A0.dts"

KERNEL_MODULE_AUTOLOAD_append_beaglebone += "snd-soc-tlv320aic3x"
KERNEL_FEATURES_append_beaglebone = "snd.scc"

##do_install_prepend() {
##  cp ${WORKDIR}/BB-BONE-AUDI-02-00A0.dts ${WORKDIR}/linux/arch/${ARCH}/boot/dts/
##}
