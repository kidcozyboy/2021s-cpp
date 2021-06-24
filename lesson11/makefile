#
#	makefile
#

CXX		=	g++
CXXFLAGS	=	$(CXXINCLUDE) $(DEBUG)
CXXINCLUDE	=
LINK.o		=	$(LINK.cc)
#LDLIBS		=	-lgdi32
LOADLIBS	=	
DEBUG		=	
#DEBUG		=	-Wall
DEBUG		=	-Wall -g
ZIPCMD		=	zip

TARGET		=	$(TARGET_EX) $(TARGET_QZ)
TARGET_EX	=	ex11_1 ex11_2 ex11_3 ex11_4 ex11_5 ex11_6
TARGET_QZ	=	q11_1_1 q11_1_2 q11_1_3 q11_2 q11_3 q11_4

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex11_1.o ex11_2.o ex11_3.o ex11_4.o ex11_5.o ex11_6.o
OBJS_QZ		=	q11_1_1.o q11_1_2.o q11_1_3.o q11_2.o q11_3.o q11_4.o

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex11_1.exe ex11_2.exe ex11_3.exe ex11_4.exe ex11_5.exe ex11_6.exe
WEXECS_QZ	=	q11_1_1.exe q11_1_2.exe q11_1_3.exe q11_2.exe q11_3.exe q11_4.exe

WORKDIR		=	lesson11
#CANVASDIR	=	canvas

ARCHIVE		=	$(WORKDIR).zip

ZIP_SRCS	=	$(WORKDIR)/q11_1_1.cpp $(WORKDIR)/q11_1_2.cpp $(WORKDIR)/q11_1_3.cpp \
			$(WORKDIR)/q11_2.cpp $(WORKDIR)/q11_3.cpp $(WORKDIR)/q11_4.cpp

ZIP_HDRS	=	$(WORKDIR)/Array2.h

#ZIP_MISC	=	$(WORKDIR)/makefile $(CANVASDIR)/canvas.h $(CANVASDIR)/canvas.cpp
ZIP_MISC	=	$(WORKDIR)/makefile

default:
	@echo make XXX となるようにターゲットを指定してください

all:		$(TARGET)

quiz:		$(TARGET_QZ)

clean:	
		-$(RM) $(WEXECS) $(OBJS) $(TARGET) *.exe.stackdump

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(ZIP_SRCS) $(ZIP_HDRS) $(ZIP_MISC))

ex11_1:		ex11_1.o
ex11_2:		ex11_2.o
ex11_3:		ex11_3.o
ex11_4:		ex11_4.o
ex11_5:		ex11_5.o
ex11_6:		ex11_6.o

q11_1_1:		q11_1_1.o
q11_1_2:		q11_1_2.o
q11_1_3:		q11_1_3.o
q11_2:		q11_2.o
q11_3:		q11_3.o
q11_4:		q11_4.o

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
#		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
		$(LINK.cc) $^ $(LOADLIBES) -o $@
