FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += " \
  file://BB-BONE-AUDI-02-00A0.dts \
  file://tlv320aic3x.scc \
  file://tlv320aic3x.cfg \
  file://snd_ti_beaglebone_default.scc \
  file://snd_ti_beaglebone_default.cfg \
"
#SRC_URI += "${@base_contains('MACHINE', 'beaglebone', 'file://BB-BONE-AUDI-02-00A0.dts', '', d)}"
#KERNEL_DEVICETREE_append = " BB-BONE-AUDI-02-00A0.dts"

#KERNEL_MODULE_AUTOLOAD += " snd-soc-omap snd-soc-tlv320aic3x"
#KERNEL_FEATURES_append = " tlv320aic3x.scc"
KERNEL_FEATURES_append = " snd_ti_beaglebone_default.scc"

##do_install_prepend() {
##  cp ${WORKDIR}/BB-BONE-AUDI-02-00A0.dts ${WORKDIR}/linux/arch/${ARCH}/boot/dts/
##}
