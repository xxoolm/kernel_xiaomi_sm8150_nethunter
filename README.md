
sdTLB Kali Nethunter kernel source for Xiaomi MI9 (cepheus)
=============================================================


Warning: This kernel and instruction is for study purpose only. I will not be held responsible for any misuse or any attempt to use them illegally!!!!!!!!


==>This is a utility kernel which has the support for Kali Nethunter. It's designed to operate on Xiaomi MI9. 

==>Built basing on Evira kernel configuration files to ensure powersave and speed.
   There are author links  https://github.com/EviraKernel/Officialmi9 

==>Support for Evira kernel features
   https://github.com/EviraKernel/Officialmi9/blob/Evira_Miui/README

==>Support for HID Attack

==>Support for Droidducky Attack

==>Support for cellphone sniffing data in Rndis with OTG

==>Support for wirelessCARD-USB through OTG

==>Support for RTL-SDR

==>Only support for MIUI and using other rom may not boot !!!!!!!!!!

# Known issues

Boot prompt system error (But not, and I don't know where the error is)


# How to build 
Here is a detailed compilation tutorial  https://github.com/MiCode/Xiaomi_Kernel_OpenSource/wiki/How-to-compile-kernel-standalone
After compiling, you need to use anykernel3 to build package.

Flash this kernel and you can also flash the dtbo.img.  This can be created by downloading and installing this
https://android.googlesource.com/platform/system/libufdt/+/master/utils/ download the .tgz file, extract and from the src directory,
run python mkdtboimg.py dtbo.img /out/arch/arm64/boot/dts/qcom/*.dts.  This image will be flashable to DTBO in TWRP, and required.
The image which builds in /out/arch/arm64/boot/Image-dtb has to be repacked into a boot.img and flashed to BOOT im TWRP.  Then
Magisk 19.3 or 19.4 (Canary beta builds, for root) or disable-dm-verity-force-encrypt.zip (no root) needs to be installed in TWRP to boot.  Be sure to flash one of the above files or the ROM will not boot!


# Need to be patched after the kernel flash is completed
1.Copy everything in init.nethunter.rc to your system /system_root/init.usb.configfs.rc  
2.Copy content 

/dev/hidg* 0666 root root 

below "/dev/kgsl.*root.*root" in ueventd.rc

3.Copy "keyboard-descriptor.bin" and "keyboard-descriptor.bin" to /system_root

4.Flash the magisk modules to add wireless inject firmware
https://github.com/johanlike/DJY-Nethunter-Magisk-Modules/releases/download/DJY-Magisk-modules-V67/DJY-Magisk-modules-V67.zip

5.Reboot


Three files "init.nethunter.rc","keyboard-descriptor.bin" and "keyboard-descriptor.bin" I have already stored it in the "build" directory.


# PS: If HID Attack can’t work, please run one of the following commands in Android shell (under root privillage) :

setprop sys.usb.config win,hid

setprop sys.usb.config win,mass_storage

setprop sys.usb.config win,rndis

setprop sys.usb.config win,hid,mass_storage

setprop sys.usb.config win,rndis,hid

setprop sys.usb.config win,rndis,mass_storage

setprop sys.usb.config win,rndis,hid,mass_storage

setprop sys.usb.config mac,hid

setprop sys.usb.config mac,mass_storage

setprop sys.usb.config mac,ecm

setprop sys.usb.config mac,hid,mass_storage

setprop sys.usb.config mac,ecm,hid

setprop sys.usb.config mac,ecm,mass_storage

setprop sys.usb.config mac,ecm,hid,mass_storage

setprop sys.usb.config win,hid,adb

setprop sys.usb.config win,mass_storage

setprop sys.usb.config win,rndis

setprop sys.usb.config win,hid,adb,mass_storage

setprop sys.usb.config win,rndis,hid,adb

setprop sys.usb.config win,rndis,mass_storage

setprop sys.usb.config win,rndis,hid,adb,mass_storage

setprop sys.usb.config mac,hid,adb

setprop sys.usb.config mac,mass_storage

setprop sys.usb.config mac,ecm

setprop sys.usb.config mac,hid,adb,mass_storage

setprop sys.usb.config mac,ecm,hid,adb

setprop sys.usb.config mac,ecm,mass_storage

setprop sys.usb.config mac,ecm,hid,adb,mass_storage



# And last

I want to thank HID patch support and WIFI injection provided by re4son.
https://github.com/Re4son/android_kernel_oneplus_sm8150/commits/nethunter-9.0

Thanks to DJY for providing ideas and magisk incremental packages.
https://github.com/johanlike/DJY-Oneplus6-or-Oneplus6T-Nethunter-Andrax-Kernel
https://github.com/johanlike/DJY-Nethunter-Magisk-Modules

Thanks to the excellent kernel source provided by Resurrect88.
https://github.com/EviraKernel/Officialmi9/



Linux kernel
============

This file was moved to Documentation/admin-guide/README.rst

Please notice that there are several guides for kernel developers and users.
These guides can be rendered in a number of formats, like HTML and PDF.

In order to build the documentation, use ``make htmldocs`` or
``make pdfdocs``.

There are various text files in the Documentation/ subdirectory,
several of them using the Restructured Text markup notation.
See Documentation/00-INDEX for a list of what is contained in each file.
