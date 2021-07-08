#
#	makefile
#

CXX		=	g++
CXXFLAGS	=	$(CXXINCLUDE) $(DEBUG)
CXXINCLUDE	=
LINK.o		=	$(LINK.cc)
LDLIBS		=	
LOADLIBS	=	
DEBUG		=	
DEBUG		=	-Wall
#DEBUG		=	-Wall -g
ZIPCMD		=	zip

TARGET		=	$(TARGET_EX) $(TARGET_QZ)
TARGET_EX	=	ex13_1 ex13_2 ex13_3 ex13_4 \
			ex13_5 ex13_6
TARGET_QZ	=	q13_1 q13_2 q13_3 q13_4 q13_5

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex13_1.o ex13_2.o ex13_3.o ex13_4.o \
			ex13_5.o ex13_6.o
OBJS_QZ		=	q13_1.o q13_2.o q13_3.o q13_4.o q13_5.o

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex13_1.exe ex13_2.exe ex13_3.exe ex13_4.exe \
			ex13_5.exe ex13_6.exe
WEXECS_QZ	=	q13_1.exe q13_2.exe q13_3.exe \
			q13_4.exe q13_5.exe

WORKDIR		=	lesson13

ARCHIVE		=	$(WORKDIR).zip

ZIP_SRCS	=	$(WORKDIR)/q*.cpp

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

ex13_1:	ex13_1.o
ex13_2:	ex13_2.o
ex13_3:	ex13_3.o
ex13_4:	ex13_4.o
ex13_5:	ex13_5.o
ex13_6:	ex13_6.o
q13_1:		q13_1.o
q13_2:		q13_2.o
q13_3:		q13_3.o
q13_4:		q13_4.o
q13_5:		q13_5.o

ex13_1.o:	ex13_1.cpp
ex13_2.o:	ex13_2.cpp
ex13_3.o:	ex13_3.cpp
ex13_4.o:	ex13_4.cpp
ex13_5.o:	ex13_5.cpp
ex13_6.o:	ex13_6.cpp
q13_1.o:	q13_1.cpp
q13_2.o:	q13_2.cpp
q13_3.o:	q13_3.cpp
q13_4.o:	q13_4.cpp
q13_5.o:	q13_5.cpp

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
