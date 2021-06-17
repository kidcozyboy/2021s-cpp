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
#DEBUG		=	-Wall
DEBUG		=	-Wall -g
ZIPCMD		=	zip

TARGET		=	$(TARGET_EX) $(TARGET_QZ)
TARGET_EX	=	ex10_1 ex10_2 ex10_3 ex10_4 ex10_5 ex10_6 ex10_7 ex10_8
TARGET_QZ	=	q10_1_1 q10_1_2 q10_2 q10_3 q10_4

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex10_1.o ex10_2.o ex10_3.o ex10_4.o ex10_5.o ex10_6.o ex10_7.o ex10_8.o
OBJS_QZ		=	q10_1_1.o q10_1_2.o q10_2.o q10_3.o q10_4.o

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex10_1.exe ex10_2.exe ex10_3.exe ex10_4.exe ex10_5.exe ex10_6.exe ex10_7.exe ex10_8.exe
WEXECS_QZ	=	q10_1_1.exe q10_1_2.exe q10_2.exe q10_3.exe q10_4.exe

WORKDIR		=	lesson10
CANVASDIR	=	canvas

ARCHIVE		=	$(WORKDIR).zip

ZIP_SRCS	=	$(WORKDIR)/q10_1_1.cpp $(WORKDIR)/q10_1_2.cpp $(WORKDIR)/q10_2.cpp \
			$(WORKDIR)/q10_3.cpp $(WORKDIR)/q10_4.cpp

ZIP_HDRS	=	$(WORKDIR)/Point.h $(WORKDIR)/Car.h \
			$(WORKDIR)/Color.h $(WORKDIR)/ColoredCar.h

ZIP_MISC	=	$(WORKDIR)/makefile $(CANVASDIR)/canvas.h $(CANVASDIR)/canvas.cpp

default:
	@echo make XXX となるようにターゲットを指定してください

all:		$(TARGET)

quiz:		$(TARGET_QZ)

clean:	
		-$(RM) $(WEXECS) $(OBJS) $(TARGET) *.exe.stackdump

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(ZIP_SRCS) $(ZIP_HDRS) $(ZIP_MISC))

ex10_1:		ex10_1.o
ex10_2:		ex10_2.o
ex10_3:		ex10_3.o
ex10_4:		ex10_4.o
ex10_5:		ex10_5.o
ex10_6:		ex10_6.o
ex10_7:		ex10_7.o
ex10_8:		ex10_8.o

q10_1_1:		q10_1_1.o
q10_1_2:		q10_1_2.o
q10_2:		q10_2.o
q10_3:		q10_3.o ../canvas/canvas.o
q10_4:		q10_4.o ../canvas/canvas.o

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
