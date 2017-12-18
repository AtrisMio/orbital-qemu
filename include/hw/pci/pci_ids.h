/*
 *      PCI Class, Vendor and Device IDs
 *
 *      Please keep sorted.
 *
 *      Abbreviated version of linux/pci_ids.h
 *
 *      QEMU-specific definitions belong in pci.h
 */

#ifndef HW_PCI_IDS_H
#define HW_PCI_IDS_H

/* Device classes and subclasses */

#define PCI_CLASS_NOT_DEFINED            0x0000
#define PCI_CLASS_NOT_DEFINED_VGA        0x0001

#define PCI_BASE_CLASS_STORAGE           0x01
#define PCI_CLASS_STORAGE_SCSI           0x0100
#define PCI_CLASS_STORAGE_IDE            0x0101
#define PCI_CLASS_STORAGE_FLOPPY         0x0102
#define PCI_CLASS_STORAGE_IPI            0x0103
#define PCI_CLASS_STORAGE_RAID           0x0104
#define PCI_CLASS_STORAGE_ATA            0x0105
#define PCI_CLASS_STORAGE_SATA           0x0106
#define PCI_CLASS_STORAGE_SAS            0x0107
#define PCI_CLASS_STORAGE_EXPRESS        0x0108
#define PCI_CLASS_STORAGE_OTHER          0x0180

#define PCI_BASE_CLASS_NETWORK           0x02
#define PCI_CLASS_NETWORK_ETHERNET       0x0200
#define PCI_CLASS_NETWORK_TOKEN_RING     0x0201
#define PCI_CLASS_NETWORK_FDDI           0x0202
#define PCI_CLASS_NETWORK_ATM            0x0203
#define PCI_CLASS_NETWORK_ISDN           0x0204
#define PCI_CLASS_NETWORK_WORLDFIP       0x0205
#define PCI_CLASS_NETWORK_PICMG214       0x0206
#define PCI_CLASS_NETWORK_OTHER          0x0280

#define PCI_BASE_CLASS_DISPLAY           0x03
#define PCI_CLASS_DISPLAY_VGA            0x0300
#define PCI_CLASS_DISPLAY_XGA            0x0301
#define PCI_CLASS_DISPLAY_3D             0x0302
#define PCI_CLASS_DISPLAY_OTHER          0x0380

#define PCI_BASE_CLASS_MULTIMEDIA        0x04
#define PCI_CLASS_MULTIMEDIA_VIDEO       0x0400
#define PCI_CLASS_MULTIMEDIA_AUDIO       0x0401
#define PCI_CLASS_MULTIMEDIA_PHONE       0x0402
#define PCI_CLASS_MULTIMEDIA_AUDIO_DEV   0x0403
#define PCI_CLASS_MULTIMEDIA_OTHER       0x0480

#define PCI_BASE_CLASS_MEMORY            0x05
#define PCI_CLASS_MEMORY_RAM             0x0500
#define PCI_CLASS_MEMORY_FLASH           0x0501
#define PCI_CLASS_MEMORY_OTHER           0x0580

#define PCI_BASE_CLASS_BRIDGE            0x06
#define PCI_CLASS_BRIDGE_HOST            0x0600
#define PCI_CLASS_BRIDGE_ISA             0x0601
#define PCI_CLASS_BRIDGE_EISA            0x0602
#define PCI_CLASS_BRIDGE_MC              0x0603
#define PCI_CLASS_BRIDGE_PCI             0x0604
#define PCI_CLASS_BRIDGE_PCI_INF_SUB     0x01
#define PCI_CLASS_BRIDGE_PCMCIA          0x0605
#define PCI_CLASS_BRIDGE_NUBUS           0x0606
#define PCI_CLASS_BRIDGE_CARDBUS         0x0607
#define PCI_CLASS_BRIDGE_RACEWAY         0x0608
#define PCI_CLASS_BRIDGE_PCI_SEMITP      0x0609
#define PCI_CLASS_BRIDGE_IB_PCI          0x060a
#define PCI_CLASS_BRIDGE_OTHER           0x0680

#define PCI_BASE_CLASS_COMMUNICATION     0x07
#define PCI_CLASS_COMMUNICATION_SERIAL   0x0700
#define PCI_CLASS_COMMUNICATION_PARALLEL 0x0701
#define PCI_CLASS_COMMUNICATION_MULTISERIAL 0x0702
#define PCI_CLASS_COMMUNICATION_MODEM    0x0703
#define PCI_CLASS_COMMUNICATION_GPIB     0x0704
#define PCI_CLASS_COMMUNICATION_SC       0x0705
#define PCI_CLASS_COMMUNICATION_OTHER    0x0780

#define PCI_BASE_CLASS_SYSTEM            0x08
#define PCI_CLASS_SYSTEM_PIC             0x0800
#define PCI_CLASS_SYSTEM_PIC_IOAPIC      0x080010
#define PCI_CLASS_SYSTEM_PIC_IOXAPIC     0x080020
#define PCI_CLASS_SYSTEM_DMA             0x0801
#define PCI_CLASS_SYSTEM_TIMER           0x0802
#define PCI_CLASS_SYSTEM_RTC             0x0803
#define PCI_CLASS_SYSTEM_PCI_HOTPLUG     0x0804
#define PCI_CLASS_SYSTEM_SDHCI           0x0805
#define PCI_CLASS_SYSTEM_OTHER           0x0880

#define PCI_BASE_CLASS_INPUT             0x09
#define PCI_CLASS_INPUT_KEYBOARD         0x0900
#define PCI_CLASS_INPUT_PEN              0x0901
#define PCI_CLASS_INPUT_MOUSE            0x0902
#define PCI_CLASS_INPUT_SCANNER          0x0903
#define PCI_CLASS_INPUT_GAMEPORT         0x0904
#define PCI_CLASS_INPUT_OTHER            0x0980

#define PCI_BASE_CLASS_DOCKING           0x0a
#define PCI_CLASS_DOCKING_GENERIC        0x0a00
#define PCI_CLASS_DOCKING_OTHER          0x0a80

#define PCI_BASE_CLASS_PROCESSOR         0x0b
#define PCI_CLASS_PROCESSOR_PENTIUM      0x0b02
#define PCI_CLASS_PROCESSOR_POWERPC      0x0b20
#define PCI_CLASS_PROCESSOR_MIPS         0x0b30
#define PCI_CLASS_PROCESSOR_CO           0x0b40

#define PCI_BASE_CLASS_SERIAL            0x0c
#define PCI_CLASS_SERIAL_FIREWIRE        0x0c00
#define PCI_CLASS_SERIAL_ACCESS          0x0c01
#define PCI_CLASS_SERIAL_SSA             0x0c02
#define PCI_CLASS_SERIAL_USB             0x0c03
#define PCI_CLASS_SERIAL_USB_UHCI        0x0c0300
#define PCI_CLASS_SERIAL_USB_OHCI        0x0c0310
#define PCI_CLASS_SERIAL_USB_EHCI        0x0c0320
#define PCI_CLASS_SERIAL_USB_XHCI        0x0c0330
#define PCI_CLASS_SERIAL_USB_UNKNOWN     0x0c0380
#define PCI_CLASS_SERIAL_USB_DEVICE      0x0c03fe
#define PCI_CLASS_SERIAL_FIBER           0x0c04
#define PCI_CLASS_SERIAL_SMBUS           0x0c05
#define PCI_CLASS_SERIAL_IB              0x0c06
#define PCI_CLASS_SERIAL_IPMI            0x0c07
#define PCI_CLASS_SERIAL_SERCOS          0x0c08
#define PCI_CLASS_SERIAL_CANBUS          0x0c09

#define PCI_BASE_CLASS_WIRELESS          0x0d
#define PCI_CLASS_WIRELESS_IRDA          0x0d00
#define PCI_CLASS_WIRELESS_CIR           0x0d01
#define PCI_CLASS_WIRELESS_RF_CONTROLLER 0x0d10
#define PCI_CLASS_WIRELESS_BLUETOOTH     0x0d11
#define PCI_CLASS_WIRELESS_BROADBAND     0x0d12
#define PCI_CLASS_WIRELESS_OTHER         0x0d80

#define PCI_BASE_CLASS_SATELLITE         0x0f
#define PCI_CLASS_SATELLITE_TV           0x0f00
#define PCI_CLASS_SATELLITE_AUDIO        0x0f01
#define PCI_CLASS_SATELLITE_VOICE        0x0f03
#define PCI_CLASS_SATELLITE_DATA         0x0f04

#define PCI_BASE_CLASS_CRYPT             0x10
#define PCI_CLASS_CRYPT_NETWORK          0x1000
#define PCI_CLASS_CRYPT_ENTERTAINMENT    0x1001
#define PCI_CLASS_CRYPT_OTHER            0x1080

#define PCI_BASE_CLASS_SIGNAL_PROCESSING 0x11
#define PCI_CLASS_SP_DPIO                0x1100
#define PCI_CLASS_SP_PERF                0x1101
#define PCI_CLASS_SP_SYNCH               0x1110
#define PCI_CLASS_SP_MANAGEMENT          0x1120
#define PCI_CLASS_SP_OTHER               0x1180

#define PCI_CLASS_OTHERS                 0xff

/* Vendors and devices.  Sort key: vendor first, device next. */

#define PCI_VENDOR_ID_LSI_LOGIC          0x1000
#define PCI_DEVICE_ID_LSI_53C810         0x0001
#define PCI_DEVICE_ID_LSI_53C895A        0x0012
#define PCI_DEVICE_ID_LSI_SAS1068        0x0054
#define PCI_DEVICE_ID_LSI_SAS1078        0x0060
#define PCI_DEVICE_ID_LSI_SAS0079        0x0079

#define PCI_VENDOR_ID_DEC                0x1011
#define PCI_DEVICE_ID_DEC_21154          0x0026

#define PCI_VENDOR_ID_CIRRUS             0x1013

#define PCI_VENDOR_ID_IBM                0x1014

#define PCI_VENDOR_ID_AMD                0x1022
#define PCI_DEVICE_ID_AMD_LANCE          0x2000
#define PCI_DEVICE_ID_AMD_SCSI           0x2020

#define PCI_VENDOR_ID_TI                 0x104c

#define PCI_VENDOR_ID_MOTOROLA           0x1057
#define PCI_DEVICE_ID_MOTOROLA_MPC106    0x0002
#define PCI_DEVICE_ID_MOTOROLA_RAVEN     0x4801

#define PCI_VENDOR_ID_APPLE              0x106b
#define PCI_DEVICE_ID_APPLE_UNI_N_AGP    0x0020
#define PCI_DEVICE_ID_APPLE_U3_AGP       0x004b

#define PCI_VENDOR_ID_SUN                0x108e
#define PCI_DEVICE_ID_SUN_EBUS           0x1000
#define PCI_DEVICE_ID_SUN_SIMBA          0x5000
#define PCI_DEVICE_ID_SUN_SABRE          0xa000

#define PCI_VENDOR_ID_CMD                0x1095
#define PCI_DEVICE_ID_CMD_646            0x0646

#define PCI_VENDOR_ID_REALTEK            0x10ec
#define PCI_DEVICE_ID_REALTEK_8139       0x8139

#define PCI_VENDOR_ID_XILINX             0x10ee

#define PCI_VENDOR_ID_VIA                0x1106
#define PCI_DEVICE_ID_VIA_ISA_BRIDGE     0x0686
#define PCI_DEVICE_ID_VIA_IDE            0x0571
#define PCI_DEVICE_ID_VIA_UHCI           0x3038
#define PCI_DEVICE_ID_VIA_ACPI           0x3057
#define PCI_DEVICE_ID_VIA_AC97           0x3058
#define PCI_DEVICE_ID_VIA_MC97           0x3068

#define PCI_VENDOR_ID_MARVELL            0x11ab

#define PCI_VENDOR_ID_SILICON_MOTION     0x126f
#define PCI_DEVICE_ID_SM501              0x0501

#define PCI_VENDOR_ID_ENSONIQ            0x1274
#define PCI_DEVICE_ID_ENSONIQ_ES1370     0x5000

#define PCI_VENDOR_ID_CHELSIO            0x1425

#define PCI_VENDOR_ID_FREESCALE          0x1957
#define PCI_DEVICE_ID_MPC8533E           0x0030

#define PCI_VENDOR_ID_INTEL              0x8086
#define PCI_DEVICE_ID_INTEL_82378        0x0484
#define PCI_DEVICE_ID_INTEL_82441        0x1237
#define PCI_DEVICE_ID_INTEL_82801AA_5    0x2415
#define PCI_DEVICE_ID_INTEL_82801BA_11   0x244e
#define PCI_DEVICE_ID_INTEL_82801D       0x24CD
#define PCI_DEVICE_ID_INTEL_ESB_9        0x25ab
#define PCI_DEVICE_ID_INTEL_82371SB_0    0x7000
#define PCI_DEVICE_ID_INTEL_82371SB_1    0x7010
#define PCI_DEVICE_ID_INTEL_82371SB_2    0x7020
#define PCI_DEVICE_ID_INTEL_82371AB_0    0x7110
#define PCI_DEVICE_ID_INTEL_82371AB      0x7111
#define PCI_DEVICE_ID_INTEL_82371AB_2    0x7112
#define PCI_DEVICE_ID_INTEL_82371AB_3    0x7113

#define PCI_DEVICE_ID_INTEL_ICH9_0       0x2910
#define PCI_DEVICE_ID_INTEL_ICH9_1       0x2917
#define PCI_DEVICE_ID_INTEL_ICH9_2       0x2912
#define PCI_DEVICE_ID_INTEL_ICH9_3       0x2913
#define PCI_DEVICE_ID_INTEL_ICH9_4       0x2914
#define PCI_DEVICE_ID_INTEL_ICH9_5       0x2919
#define PCI_DEVICE_ID_INTEL_ICH9_6       0x2930
#define PCI_DEVICE_ID_INTEL_ICH9_7       0x2916
#define PCI_DEVICE_ID_INTEL_ICH9_8       0x2918

#define PCI_DEVICE_ID_INTEL_82801I_UHCI1 0x2934
#define PCI_DEVICE_ID_INTEL_82801I_UHCI2 0x2935
#define PCI_DEVICE_ID_INTEL_82801I_UHCI3 0x2936
#define PCI_DEVICE_ID_INTEL_82801I_UHCI4 0x2937
#define PCI_DEVICE_ID_INTEL_82801I_UHCI5 0x2938
#define PCI_DEVICE_ID_INTEL_82801I_UHCI6 0x2939
#define PCI_DEVICE_ID_INTEL_82801I_EHCI1 0x293a
#define PCI_DEVICE_ID_INTEL_82801I_EHCI2 0x293c
#define PCI_DEVICE_ID_INTEL_82599_SFP_VF 0x10ed

#define PCI_DEVICE_ID_INTEL_Q35_MCH      0x29c0

#define PCI_VENDOR_ID_XEN                0x5853
#define PCI_DEVICE_ID_XEN_PLATFORM       0x0001

#define PCI_VENDOR_ID_NEC                0x1033
#define PCI_DEVICE_ID_NEC_UPD720200      0x0194

#define PCI_VENDOR_ID_TEWS               0x1498
#define PCI_DEVICE_ID_TEWS_TPCI200       0x30C8

#endif
