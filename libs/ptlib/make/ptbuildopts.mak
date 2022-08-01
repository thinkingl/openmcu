# This file is automatically generated by autoconf
#

ifndef PTLIBDIR
	echo "No PTLIBDIR environment variable defined!"
	echo "You need to define PTLIBDIR!"
	echo "Try something like:"
	echo "PTLIBDIR = $(HOME)/ptlib"
	exit 1
endif

MACHTYPE   = x86_64
OSTYPE	   = linux
OSRELEASE  = "5.13.0-52-generic"

STDCCFLAGS    +=  -D_REENTRANT -fno-exceptions 
STDCXXFLAGS   +=  
OPTSTDCCFLAGS += 
LDFLAGS	      += 
ENDLDLIBS     +=  -lpthread -lssl -lcrypto -lresolv -ldl
DEBUG_FLAG    += -g

AR		= /usr/bin/ar

USE_GCC         = yes
USE_PCH		= 1
HAS_IPV6        = no
HAS_RESOLVER	= 1
HAS_OPENSSL	= 1
HAS_OPENLDAP	= 
HAS_SASL	= 0
HAS_SASL2	= 
HAS_EXPAT	= 
HAS_REGEX	= 1
HAS_SDL		= 
HAS_PLUGINS	= 
HAS_VIDEO_CAPTURE = 

HAS_ALSA	= 
HAS_OSS		= 1
HAS_V4L		= @HAS_V4L@
HAS_V4L2	= @HAS_V4L2@
HAS_BSDVIDEOCAP = @HAS_BSDVIDEOCAP@
HAS_AVC1394	= @HAS_AVC1394@
HAS_DC1394	= @HAS_DC1394@

HAS_TTS		= 1
HAS_ASN		= 1
HAS_STUN	= 1
HAS_PIPECHAN	= 1
HAS_DTMF	= 1
HAS_WAVFILE	= 1
HAS_SOCKS	= 1
HAS_FTP		= 1
HAS_SNMP	= 1
HAS_TELNET	= 1
HAS_REMCONN	= 
HAS_SERIAL	= 1
HAS_POP3SMTP	= 1
HAS_AUDIO	= 1
HAS_VIDEO	= 1
USE_SHM_VIDEO_DEVICES = 1

HAS_VXML	= 
HAS_JABBER	= 
HAS_XMLRPC	= 
HAS_SOAP	= 
HAS_HTTP	= 1
HAS_HTTPSVC	= 1
HAS_CONFIG_FILE = 1
HAS_SOCKAGG	= 
HAS_VIDFILE	= 1
HAS_ODBC    = 

SHAREDLIBEXT	= so

P_STATIC_LDFLAGS   = 
P_STATIC_ENDLDLIBS = 


