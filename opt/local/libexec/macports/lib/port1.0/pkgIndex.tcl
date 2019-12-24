# Tcl package index file, version 1.1
# This file is generated by the "pkg_mkIndex" command
# and sourced either when an application starts up or
# by a "package unknown" script.  It invokes the
# "package ifneeded" command to set up package-related
# information so that packages will be loaded automatically
# in response to "package require" commands.  When this
# script is sourced, the variable $dir must contain the
# full path name of this file's directory.

package ifneeded fetch_common 1.0 [list source [file join $dir fetch_common.tcl]]
package ifneeded port 1.0 [list source [file join $dir port.tcl]]\n[list source [file join $dir port_autoconf.tcl]]
package ifneeded portactivate 1.0 [list source [file join $dir portactivate.tcl]]
package ifneeded portbuild 1.0 [list source [file join $dir portbuild.tcl]]
package ifneeded portbump 1.0 [list source [file join $dir portbump.tcl]]
package ifneeded portchecksum 1.0 [list source [file join $dir portchecksum.tcl]]
package ifneeded portclean 1.0 [list source [file join $dir portclean.tcl]]
package ifneeded portconfigure 1.0 [list source [file join $dir portconfigure.tcl]]
package ifneeded portdeactivate 1.0 [list source [file join $dir portdeactivate.tcl]]
package ifneeded portdepends 1.0 [list source [file join $dir portdepends.tcl]]
package ifneeded portdestroot 1.0 [list source [file join $dir portdestroot.tcl]]
package ifneeded portdistcheck 1.0 [list source [file join $dir portdistcheck.tcl]]
package ifneeded portdistfiles 1.0 [list source [file join $dir portdistfiles.tcl]]
package ifneeded portextract 1.0 [list source [file join $dir portextract.tcl]]
package ifneeded portfetch 1.0 [list source [file join $dir portfetch.tcl]]
package ifneeded portinstall 1.0 [list source [file join $dir portinstall.tcl]]
package ifneeded portlint 1.0 [list source [file join $dir portlint.tcl]]
package ifneeded portlivecheck 1.0 [list source [file join $dir portlivecheck.tcl]]
package ifneeded portload 1.0 [list source [file join $dir portload.tcl]]
package ifneeded portmain 1.0 [list source [file join $dir portmain.tcl]]
package ifneeded portmirror 1.0 [list source [file join $dir portmirror.tcl]]
package ifneeded portpatch 1.0 [list source [file join $dir portpatch.tcl]]
package ifneeded portreload 1.0 [list source [file join $dir portreload.tcl]]
package ifneeded portsandbox 1.0 [list source [file join $dir portsandbox.tcl]]
package ifneeded portstartupitem 1.0 [list source [file join $dir portstartupitem.tcl]]
package ifneeded porttest 1.0 [list source [file join $dir porttest.tcl]]
package ifneeded porttrace 1.0 [list source [file join $dir porttrace.tcl]]
package ifneeded portuninstall 1.0 [list source [file join $dir portuninstall.tcl]]
package ifneeded portunload 1.0 [list source [file join $dir portunload.tcl]]
package ifneeded portutil 1.0 [list source [file join $dir portutil.tcl]]
