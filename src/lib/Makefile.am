if PLATFORM_WIN32
version_info = -version-info $(LT_CURRENT):$(LT_REVISION):$(LT_AGE) -avoid-version
else
version_info = -version-info $(LT_CURRENT):$(LT_REVISION):$(LT_AGE)
endif

lib_LTLIBRARIES = libvisio-@VSD_MAJOR_VERSION@.@VSD_MINOR_VERSION@.la
libvisio_@VSD_MAJOR_VERSION@_@VSD_MINOR_VERSION@_includedir = $(includedir)/libvisio-@VSD_MAJOR_VERSION@.@VSD_MINOR_VERSION@/libvisio
libvisio_@VSD_MAJOR_VERSION@_@VSD_MINOR_VERSION@_include_HEADERS = \
	libvisio.h \
	VSDStringVector.h \
	VisioDocument.h

AM_CXXFLAGS = $(LIBVISIO_CXXFLAGS) $(DEBUG_CXXFLAGS)

libvisio_@VSD_MAJOR_VERSION@_@VSD_MINOR_VERSION@_la_LIBADD  = $(LIBVISIO_LIBS) @LIBVISIO_WIN32_RESOURCE@
libvisio_@VSD_MAJOR_VERSION@_@VSD_MINOR_VERSION@_la_DEPENDENCIES = @LIBVISIO_WIN32_RESOURCE@
libvisio_@VSD_MAJOR_VERSION@_@VSD_MINOR_VERSION@_la_LDFLAGS = $(version_info) -export-dynamic -no-undefined
libvisio_@VSD_MAJOR_VERSION@_@VSD_MINOR_VERSION@_la_SOURCES = \
	libvisio_utils.cpp \
	VisioDocument.cpp \
	VSD11Parser.cpp \
	VSD6Parser.cpp \
	VSDInternalStream.cpp \
	VSDSVGGenerator.cpp \
	VSDXCharacterList.cpp \
	VSDXContentCollector.cpp \
	VSDXFieldList.cpp \
	VSDXGeometryList.cpp \
	VSDXOutputElementList.cpp \
	VSDXPages.cpp \
	VSDXParagraphList.cpp \
	VSDXParser.cpp \
	VSDXShapeList.cpp \
	VSDXStencils.cpp \
	VSDStringVector.cpp \
	VSDXStyles.cpp \
	VSDXStylesCollector.cpp \
	libvisio_utils.h \
	VSD11Parser.h \
	VSD6Parser.h \
	VSDInternalStream.h \
	VSDSVGGenerator.h \
	VSDXCharacterList.h \
	VSDXCollector.h \
	VSDXContentCollector.h \
	VSDXDocumentStructure.h \
	VSDXFieldList.h \
	VSDXGeometryList.h \
	VSDXOutputElementList.h \
	VSDXPages.h \
	VSDXParagraphList.h \
	VSDXParser.h \
	VSDXShapeList.h \
	VSDXStencils.h \
	VSDXStyles.h \
	VSDXStylesCollector.h \
	VSDXTypes.h

if OS_WIN32

@LIBVISIO_WIN32_RESOURCE@ : libvisio.rc $(libvisio_@VSD_MAJOR_VERSION@_@VSD_MINOR_VERSION@_la_OBJECTS)
	chmod +x $(top_srcdir)/build/win32/*compile-resource
	WINDRES=@WINDRES@ $(top_srcdir)/build/win32/lt-compile-resource libvisio.rc @LIBVISIO_WIN32_RESOURCE@

endif


EXTRA_DIST = \
	libvisio.rc.in \
	makefile.mk

# These may be in the builddir too
BUILD_EXTRA_DIST = \
	libvisio.rc
