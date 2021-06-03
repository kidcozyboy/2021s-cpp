#
#	makefile
#

CXX		=	g++
CXXFLAGS	=	$(CXXINCLUDE) $(DEBUG)
CXXINCLUDE	=
LINK.o		=	$(LINK.cc)
LDLIBS		=	-lgdi32
LOADLIBS	=	
DEBUG		=	
DEBUG		=	-Wall
#DEBUG		=	-Wall -g
ZIPCMD		=	zip

TARGET		=	$(TARGET_EX) $(TARGET_QZ)
TARGET_EX	=	ex8_1 ex8_2 ex8_3
TARGET_QZ	=	q8_1 q8_2 q8_3 q8_4

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex8_1.o ex8_2.o ex8_3.o Point.o Rect.o Circle.o Shape.o Composite.o Triangle.o Line.o
OBJS_QZ		=	q8_1.o q8_2.o q8_3.o q8_4.o 

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex8_1.exe ex8_2.exe ex8_3.exe
WEXECS_QZ	=	q8_1.exe q8_2.exe q8_3.exe q8_4.exe

WORKDIR		=	lesson08

ARCHIVE		=	$(WORKDIR).zip

ZIP_SRCS	=	$(WORKDIR)/q8_1.cpp $(WORKDIR)/q8_2.cpp \
			$(WORKDIR)/q8_3.cpp $(WORKDIR)/q8_4.cpp \
			$(WORKDIR)/Composite.cpp

ZIP_HDRS	=	$(WORKDIR)/Shape.h $(WORKDIR)/Point.h \
			$(WORKDIR)/Rect.h $(WORKDIR)/Circle.h \
			$(WORKDIR)/Triangle.h $(WORKDIR)/Line.h \
			$(WORKDIR)/Composite.h

ZIP_MISC	=	$(WORKDIR)/makefile

default:
	@echo make XXX となるようにターゲットを指定してください

all:		$(TARGET)

quiz:		$(TARGET_QZ)

clean:	
		-$(RM) $(WEXECS) $(OBJS) $(TARGET) *.exe.stackdump

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(ZIP_SRCS) $(ZIP_HDRS) $(ZIP_MISC) )

ex8_1:		ex8_1.o ../canvas/canvas.o
ex8_2:		ex8_2.o
ex8_3:		ex8_3.o Composite.cpp ../canvas/canvas.o

q8_1:		q8_1.o ../canvas/canvas.o
q8_2:		q8_2.o ../canvas/canvas.o
q8_3:		q8_3.o Composite.cpp ../canvas/canvas.o
q8_4:		q8_4.o Composite.cpp ../canvas/canvas.o

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
