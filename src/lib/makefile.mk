EXTERNAL_WARNINGS_NOT_ERRORS := TRUE

PRJ=..$/..$/..$/..$/..$/..

PRJNAME=libvisio
TARGET=visiolib
ENABLE_EXCEPTIONS=TRUE
LIBTARGET=NO

.INCLUDE :  settings.mk

.IF "$(COM)"=="MSC"
CFLAGS+=-GR
.ENDIF
.IF "$(COM)"=="GCC"
CFLAGSCXX+=-frtti
.ENDIF

.IF "$(SYSTEM_LIBWPD)" == "YES"
INCPRE+=$(WPD_CFLAGS) -I..
.ELSE
INCPRE+=$(SOLARVER)$/$(UPD)$/$(INPATH)$/inc$/libwpd
.ENDIF

.IF "$(SYSTEM_LIBWPG)" == "YES"
INCPRE+=$(WPG_CFLAGS) -I..
.ELSE
INCPRE+=$(SOLARVER)$/$(UPD)$/$(INPATH)$/inc$/libwpg
.ENDIF

SLOFILES= \
	$(SLO)$/libvisio_utils.obj \
	$(SLO)$/VisioDocument.obj \
	$(SLO)$/VSD11Parser.obj \
	$(SLO)$/VSD6Parser.obj \
	$(SLO)$/VSDInternalStream.obj \
	$(SLO)$/VSDSVGGenerator.obj \
	$(SLO)$/VSDXCharacterList.obj \
	$(SLO)$/VSDXContentCollector.obj \
	$(SLO)$/VSDXFieldList.obj \
	$(SLO)$/VSDXGeometryList.obj \
	$(SLO)$/VSDXOutputElementList.obj \
	$(SLO)$/VSDXPages.obj \
	$(SLO)$/VSDXParagraphList.obj \
	$(SLO)$/VSDXParser.obj \
	$(SLO)$/VSDXShapeList.obj \
	$(SLO)$/VSDXStencils.obj \
	$(SLO)$/VSDStringVector.obj \
	$(SLO)$/VSDXStylesCollector.obj \
	$(SLO)$/VSDXStyles.obj

LIB1ARCHIV=$(LB)$/libvisiolib.a
LIB1TARGET=$(SLB)$/$(TARGET).lib
LIB1OBJFILES= $(SLOFILES)

.INCLUDE :  target.mk
