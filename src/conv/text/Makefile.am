bin_PROGRAMS = vsd2text

AM_CXXFLAGS = -I$(top_srcdir)/src/lib -I$(top_builddir)/src/lib $(LIBVISIO_CXXFLAGS) $(DEBUG_CXXFLAGS)

vsd2text_DEPENDENCIES = @VSD2TEXT_WIN32_RESOURCE@

if STATIC_TOOLS
vsd2text_LDADD = ../../lib/@VSD_OBJDIR@/libvisio-@VSD_MAJOR_VERSION@.@VSD_MINOR_VERSION@.a $(LIBVISIO_LIBS) @VSD2TEXT_WIN32_RESOURCE@
vsd2text_LDFLAGS = -all-static 
else
vsd2text_LDADD = ../../lib/libvisio-@VSD_MAJOR_VERSION@.@VSD_MINOR_VERSION@.la $(LIBVISIO_LIBS) @VSD2TEXT_WIN32_RESOURCE@ 
endif

vsd2text_SOURCES = \
	vsd2text.cpp

if OS_WIN32

@VSD2TEXT_WIN32_RESOURCE@ : vsd2text.rc $(vsd2text_OBJECTS)
	chmod +x $(top_srcdir)/build/win32/*compile-resource
	WINDRES=@WINDRES@ $(top_srcdir)/build/win32/lt-compile-resource vsd2text.rc @VSD2TEXT_WIN32_RESOURCE@
endif

EXTRA_DIST = \
	$(vsd2text_SOURCES) \
	vsd2text.rc.in

# These may be in the builddir too
BUILD_EXTRA_DIST = \
	vsd2text.rc	 
