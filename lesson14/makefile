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
TARGET_EX	=	ex14_1 ex14_2 ex14_3 ex14_4 \
			ex14_5_1 ex14_5_2 ex14_5_3 \
			ex14_6 ex14_7
TARGET_QZ	=	q14_1 q14_2 q14_3 q14_4 q14_5

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex14_1.o ex14_2.o ex14_3.o ex14_4.o \
			ex14_5_1.o ex14_5_2.o ex14_5_3.o \
			ex14_6.o ex14_7.o
OBJS_QZ		=	q14_1.o q14_2.o q14_3.o q14_4.o q14_5.o

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex14_1.exe ex14_2.exe ex14_3.exe ex14_4.exe \
			ex14_5_1.exe ex14_5_2.exe ex14_5_3.exe \
			ex14_6.exe ex14_7.exe
WEXECS_QZ	=	q14_1.exe q14_2.exe q14_3.exe \
			q14_4.exe q14_5.exe

WORKDIR		=	lesson14

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

ex14_1:		ex14_1.o
ex14_2:		ex14_2.o
ex14_3:		ex14_3.o
ex14_4:		ex14_4.o
ex14_5_1:	ex14_5_1.o
ex14_5_2:	ex14_5_2.o
ex14_5_3:	ex14_5_3.o
ex14_6:		ex14_6.o
ex14_7:		ex14_7.o
q14_1:		q14_1.o
q14_2:		q14_2.o
q14_3:		q14_3.o
q14_4:		q14_4.o
q14_5:		q14_5.o

ex14_1.o:	ex14_1.cpp
ex14_2.o:	ex14_2.cpp
ex14_3.o:	ex14_3.cpp
ex14_4.o:	ex14_4.cpp
ex14_5_1.o:	ex14_5_1.cpp
ex14_5_2.o:	ex14_5_2.cpp
ex14_5_3.o:	ex14_5_3.cpp
ex14_6.o:	ex14_6.cpp
ex14_7.o:	ex14_7.cpp
q14_1.o:	q14_1.cpp
q14_2.o:	q14_2.cpp
q14_3.o:	q14_3.cpp
q14_4.o:	q14_4.cpp
q14_5.o:	q14_5.cpp

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
