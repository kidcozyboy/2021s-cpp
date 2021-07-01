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
TARGET_EX	=	ex12_01 ex12_02 ex12_03 ex12_04 \
			ex12_05 ex12_06 ex12_07 ex12_08 \
			ex12_09 ex12_10 ex12_11
TARGET_QZ	=	q12_1 q12_2 q12_3 q12_4 q12_5 q12_6

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex12_01.o ex12_02.o ex12_03.o ex12_04.o \
			ex12_05.o ex12_06.o ex12_07.o ex12_08.o \
			ex12_09.o ex12_10.o ex12_11.o
OBJS_QZ		=	q12_1.o q12_2.o q12_3.o q12_4.o q12_5.o q12_6.o

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex12_01.exe ex12_02.exe ex12_03.exe ex12_04.exe \
			ex12_05.exe ex12_06.exe ex12_07.exe ex12_08.exe \
			ex12_09.exe ex12_10.exe ex12_11.exe
WEXECS_QZ	=	q12_1.exe q12_2.exe q12_3.exe q12_4.exe q12_5.exe \
			q12_6.exe

WORKDIR		=	lesson12

ARCHIVE		=	$(WORKDIR).zip

ZIP_SRCS	=	$(WORKDIR)/*.cpp

ZIP_HDRS	=	$(WORKDIR)/*.h

ZIP_MISC	=	$(WORKDIR)/makefile

default:
	@echo make XXX となるようにターゲットを指定してください

all:		$(TARGET)

quiz:		$(TARGET_QZ)

clean:	
		-$(RM) $(WEXECS) $(OBJS) $(TARGET) *.exe.stackdump

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(ZIP_SRCS) $(ZIP_HDRS) $(ZIP_MISC) )

ex12_01:	ex12_01.o
		$(LINK.o) $^ -o $@
ex12_02:	ex12_02.o
		$(LINK.o) $^ -o $@
ex12_03:	ex12_03.o
		$(LINK.o) $^ -o $@
ex12_04:	ex12_04.o
		$(LINK.o) $^ -o $@
ex12_05:	ex12_05.o
		$(LINK.o) $^ -o $@
ex12_06:	ex12_06.o
		$(LINK.o) $^ -o $@
ex12_07:	ex12_07.o
		$(LINK.o) $^ -o $@
ex12_08:	ex12_08.o
		$(LINK.o) $^ -o $@
ex12_09:	ex12_09.o
		$(LINK.o) $^ -o $@
ex12_10:	ex12_10.o
		$(LINK.o) $^ -o $@
ex12_11:	ex12_11.o
		$(LINK.o) $^ -o $@
q12_1:		q12_1.o
		$(LINK.o) $^ -o $@
q12_2:		q12_2.o
		$(LINK.o) $^ -o $@
q12_3:		q12_3.o
		$(LINK.o) $^ -o $@
q12_4:		q12_4.o
		$(LINK.o) $^ -o $@
q12_5:		q12_5.o ../canvas/canvas.o
q12_6:		q12_6.o ../canvas/canvas.o

ex12_01.o:	ex12_01.cpp
ex12_02.o:	ex12_02.cpp
ex12_03.o:	ex12_03.cpp
ex12_04.o:	ex12_04.cpp
ex12_05.o:	ex12_05.cpp
ex12_06.o:	ex12_06.cpp
ex12_07.o:	ex12_07.cpp
ex12_08.o:	ex12_08.cpp
ex12_09.o:	ex12_09.cpp
ex12_10.o:	ex12_10.cpp
ex12_11.o:	ex12_11.cpp
q12_1.o:	q12_1.cpp
q12_2.o:	q12_2.cpp
q12_3.o:	q12_3.cpp
q12_4.o:	q12_4.cpp
q12_5.o:	q12_5.cpp ColoredRect.h Rect.h Color.h Point.h
q12_6.o:	q12_6.cpp ColoredCircle.h Circle.h Color.h Point.h

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
