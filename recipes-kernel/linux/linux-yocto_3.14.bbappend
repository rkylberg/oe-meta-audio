FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_beaglebone = " \
  file://add-static-capes.diff \
  file://beaglebone_with_audio_cape.cfg \
  file://beaglebone_with_audio_cape.scc \
  file://debug.cfg \
  file://debug.scc \
"

KERNEL_DEVICETREE_append_beaglebone = " \
  am335x-bone-audio-01-00A0.dtb \
  am335x-bone-audio-02-00A0.dtb \
"

KERNEL_MODULE_AUTOLOAD_append_beaglebone = "snd-soc-tlv320aic3x"
KERNEL_FEATURES_append_beaglebone = "beaglebone_with_audio_cape.scc debug.scc"
