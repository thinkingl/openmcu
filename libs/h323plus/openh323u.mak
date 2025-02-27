#
# openh323u.mak
#
# Make symbols include file for Open H323 library
#
# Copyright (c) 1998-2000 Equivalence Pty. Ltd.
#
# The contents of this file are subject to the Mozilla Public License
# Version 1.0 (the "License"); you may not use this file except in
# compliance with the License. You may obtain a copy of the License at
# http://www.mozilla.org/MPL/
#
# Software distributed under the License is distributed on an "AS IS"
# basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
# the License for the specific language governing rights and limitations
# under the License.
#
# The Original Code is Open H323 library.
#
# The Initial Developer of the Original Code is Equivalence Pty. Ltd.
#
# Contributor(s): ______________________________________.
#
# $Log: openh323u.mak.in,v $
# Revision 1.6  2008/01/02 19:38:16  shorne
# Enabled GnuGknat and FileTransfer by default
#
# Revision 1.5  2008/01/01 00:16:12  shorne
# Added GnuGknat and FileTransfer support
#
# Revision 1.4  2007/11/01 19:44:24  shorne
# *** empty log message ***
#
# Revision 1.3  2007/10/31 08:56:44  shorne
# remove obsolete items
#
# Revision 1.2  2007/10/31 08:36:05  willamowius
# -lvich263 isn't used any more
#
# Revision 1.1  2007/08/06 20:50:48  shorne
# First commit of h323plus
#
# Revision 1.17  2006/06/23 07:06:03  csoutheren
# Fixed linux compile
#
# Revision 1.16  2006/06/23 03:18:22  shorne
# Backport FECC (H.224) from Opal
#
# Revision 1.15  2006/05/30 11:09:24  hfriederich
# Allow to enable/disable H.460 in configure
#
# Revision 1.14  2005/01/03 06:25:51  csoutheren
# Added extensive support for disabling code modules at compile time
#
# Revision 1.13  2004/12/08 05:16:13  csoutheren
# Fixed OSP compilation on Linux
#
# Revision 1.12  2004/06/10 13:16:30  csoutheren
# Added configure option to remove ASN tracing
#
# Revision 1.11  2004/05/12 13:39:34  csoutheren
# Added support for --disable-video and --disable-audio
#
# Revision 1.10  2004/04/22 22:34:59  csoutheren
# Fixed mispelling of Guilhem Tardy - my apologies to him
#
# Revision 1.9  2004/04/22 14:22:19  csoutheren
# Added RFC 2190 H.263 code as created by Guilhem Tardy and AliceStreet
# Many thanks to them for their contributions.
#
# Revision 1.8  2004/04/14 11:40:04  csoutheren
# Updated to detect system GSM library
#
# Revision 1.7  2004/02/26 12:08:55  csoutheren
# Fixed various problems thanks to Klaus Kaempf
#
# Revision 1.6  2004/01/30 01:45:30  csoutheren
# Moved some compiler flags to include files
#
# Revision 1.5  2004/01/02 01:23:13  csoutheren
# More changes to allow correct autodetection of local Speex libraries
#
# Revision 1.4  2003/12/29 12:13:27  csoutheren
# configure now checks for libspeex in system libraries and compares
# version against version in local sources. Also use --enable-localspeex to
# force use of local Speex or system Speex
#
# Revision 1.3  2003/08/04 00:03:09  dereksmithies
# Get it to correctly handle tests for H263
#
# Revision 1.2  2003/07/26 03:55:31  dereksmithies
# Upates for Vic H263 codec
#
# Revision 1.1  2003/05/14 19:52:44  csoutheren
# Initial version
#
# Revision 1.45  2003/04/16 04:26:57  dereks
# Initial release of h263 codec, which utilises the ffmpeg library.
# Thanks to Guilhem Tardy, and to AliceStreet.
#
# Revision 1.44  2003/01/06 22:05:42  rogerh
# Make sure NetBSD sets HAS_OSS
#
# Revision 1.43  2003/01/06 21:21:31  rogerh
# Set HAS_OSS on more platforms
#
# Revision 1.42  2002/11/26 10:24:54  rogerh
# Move CU30 test here.
# Add new target 'ccflags' which prints the STDCCFLAGS used by pwlib and
# openh323. This is handy for 3rd party applications.
#
# Revision 1.41  2002/11/22 10:56:41  robertj
# Added PREFIX variable to move the include directory, required by packagers.
#
# Revision 1.40  2002/11/05 02:18:03  robertj
# Changed default for speex codec to be included.
#
# Revision 1.39  2002/11/04 00:37:14  dereks
# Disable usage of speex codec when NO_SPEEX define is set.
#
# Revision 1.38  2002/10/22 08:59:42  rogerh
# Use the imported Speex library
#
# Revision 1.37  2002/10/09 12:58:00  rogerh
# Look for Speex include file in SYSINCDIR. Submitted by Huib Kleinhout.
#
# Revision 1.36  2002/09/23 07:41:29  robertj
# Fixed so builds pwlib before openh323 when go make optlibs
#
# Revision 1.35  2002/08/14 04:26:00  craigs
# Fixed Speex library problem
#
# Revision 1.34  2002/08/14 02:41:08  robertj
# Fixed previous patch, missing parenthesis
#
# Revision 1.33  2002/08/14 02:28:17  robertj
# Added search order for pwlib directory, look in parent to openh323 directory
#   first, then users home directory, then /usr/local.
#
# Revision 1.32  2002/08/13 14:24:51  craigs
# Added Speex codec detection
#
# Revision 1.31  2002/08/05 12:00:18  robertj
# Changed symbol for building library dependent on OpenH323 to be a more
#   a general name.
#
# Revision 1.30  2002/08/05 07:01:25  robertj
# Fixed double inclusion of common.mak
#
# Revision 1.29  2002/04/18 05:14:10  robertj
# Changed /usr/include to SYSINCDIR helps with X-compiling, thanks Bob Lindell
#
# Revision 1.28  2002/01/14 15:38:09  rogerh
# Look for telephony.h in /usr/local/include/sys (which is where the
# FreeBSD Ports Tree copy of the ixj driver puts the header files)
#
# Revision 1.27  2001/11/27 22:48:40  robertj
# Changed to make system to better support non-shared library building.
#
# Revision 1.26  2001/10/09 09:05:24  robertj
# Added LIBDIRS variable so can go "make libs" to build openh323 & pwlib
#
# Revision 1.25  2001/10/05 03:28:18  robertj
# Fixed the inclusion of VPB support if can find the library somewhere.
#
# Revision 1.24  2001/09/11 08:33:05  robertj
# Prevented inclusion of xJack if cross compiling to Nucleus, thanks Nick Hoath
#
# Revision 1.23  2001/09/11 01:24:36  robertj
# Added conditional compilation to remove video and/or audio codecs.
#
# Revision 1.22  2001/05/16 07:35:10  robertj
# New minor version
#
# Revision 1.21  2001/05/03 01:43:55  rogerh
# There is no need to test for X11 as the openh323 library does not use it
#
# Revision 1.20  2001/03/15 11:29:52  rogerh
# use NO_XWINDOWS=1 to compile without X11 support on systems with X11 installed
#
# Revision 1.19  2001/02/10 04:01:50  robertj
# Fixed build system so application can be built NOTRACE to separate directory.
#
# Revision 1.18  2001/02/09 04:44:37  craigs
# Added ability create a NOTRACE version of an exectuable with seperate
# libraries
#
# Revision 1.17  2000/10/30 00:23:56  robertj
# Added auto inclusion of ptlib make rules
#

PWLIBDIR	= /home/thinkingl/code/openmcu-x/libs/ptlib
OPENH323DIR	= /home/thinkingl/code/openmcu-x/libs/h323plus
STDCCFLAGS	+= 
LDFLAGS		+= 
LDLIBS		+= 
ENDLDLIBS	:=  $(ENDLDLIBS)

NOAUDIOCODECS        = 
NOVIDEO	             = 
NOTRACE	             = 
H323_H224	     = 1
H323_H230	     = 1
H323_H239	     = 1
H323_H248	     = 1
H323_H249	     = 1
H323_H350	     = 
H323_H450	     = 1
H323_H460            = 1
H323_H501	     = 1
H323_T38	     = 1
H323_T120	     = 
H323_GNUGK	     = 1
H323_FILE	     = 1


ifdef LIBRARY_MAKEFILE
include $(PWLIBDIR)/make/unix.mak
else
ifeq ($(NOTRACE), 1)
OBJDIR_SUFFIX := n
endif # NOTRACE
include $(PWLIBDIR)/make/ptlib.mak
endif # LIBRARY_MAKEFILE

LIBDIRS += $(OPENH323DIR)

#OH323_SUPPRESS_H235	= 1

OH323_SRCDIR = $(OPENH323DIR)/src
ifdef PREFIX
OH323_INCDIR = $(PREFIX)/include/openh323
else
OH323_INCDIR = $(OPENH323DIR)/include
endif # PREFIX

ifndef OH323_LIBDIR
OH323_LIBDIR = $(OPENH323DIR)/lib
endif # OH323_LIBDIR

ifeq ($(NOTRACE), 1)
STDCCFLAGS += -DPASN_NOPRINTON -DPASN_LEANANDMEAN
OH323_SUFFIX = n
else
STDCCFLAGS += -DPTRACING
RCFLAGS	   += -DPTRACING
OH323_SUFFIX = $(OBJ_SUFFIX)
endif # NOTRACE

OH323_BASE  = h323_$(PLATFORM_TYPE)_$(OH323_SUFFIX)$(LIB_TYPE)
OH323_FILE  = lib$(OH323_BASE).$(LIB_SUFFIX)

LDFLAGS	    += -L$(OH323_LIBDIR)
LDLIBS	    := -l$(OH323_BASE) $(LDLIBS)

STDCCFLAGS  += -I$(OH323_INCDIR)

ifdef	OH323_SUPPRESS_H235
STDCCFLAGS  += -DOH323_SUPPRESS_H235
endif

$(TARGET) :	$(OH323_LIBDIR)/$(OH323_FILE)

ifndef LIBRARY_MAKEFILE
ifdef DEBUG
$(OH323_LIBDIR)/$(OH323_FILE):
	$(MAKE) -C $(OH323_SRCDIR) debug
else
$(OH323_LIBDIR)/$(OH323_FILE):
	$(MAKE) -C $(OH323_SRCDIR) opt
endif # DEBUG
endif # LIBRARY_MAKEFILE

# End of file

