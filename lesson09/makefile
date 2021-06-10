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
TARGET_EX	=	ex9_1_1 ex9_1_2 ex9_2_1 ex9_2_2 ex9_3 ex9_4 ex9_5
TARGET_QZ	=	q9_1 q9_2 q9_3 q9_4

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex9_1_1.o ex9_1_2.o ex9_2_1.o ex9_2_2.o ex9_3.o ex9_4.o ex9_5.o SimpleList.o SimpleList2.o SimpleList3.o
OBJS_QZ		=	q9_1.o q9_2.o q9_3.o q9_4.o SimpleList.o BidirectionalList.o

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex9_1_1.exe ex9_1_2.exe ex9_2_1.exe ex9_2_2.exe ex9_3.exe ex9_4.exe ex9_5.exe
WEXECS_QZ	=	q9_1.exe q9_2.exe q9_3.exe q9_4.exe

WORKDIR		=	lesson09
CANVASDIR	=	canvas

ARCHIVE		=	$(WORKDIR).zip

ZIP_SRCS	=	$(WORKDIR)/q9_1.cpp $(WORKDIR)/q9_2.cpp \
			$(WORKDIR)/q9_3.cpp $(WORKDIR)/q9_4.cpp \
			$(WORKDIR)/SimpleList.cpp $(WORKDIR)/BidirectionalList.cpp

ZIP_HDRS	=	$(WORKDIR)/Point.h $(WORKDIR)/Car.h \
			$(WORKDIR)/Color.h $(WORKDIR)/ColoredCar.h \
			$(WORKDIR)/Cell.h $(WORKDIR)/SimpleList.h \
			$(WORKDIR)/BidirectionalCell.h $(WORKDIR)/BidirectionalList.h

ZIP_MISC	=	$(WORKDIR)/makefile $(CANVASDIR)/canvas.h $(CANVASDIR)/canvas.cpp

default:
	@echo make XXX となるようにターゲットを指定してください

all:		$(TARGET)

quiz:		$(TARGET_QZ)

clean:	
		-$(RM) $(WEXECS) $(OBJS) $(TARGET) *.exe.stackdump

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(ZIP_SRCS) $(ZIP_HDRS) $(ZIP_MISC))

ex9_1_1:	ex9_1_1.o
ex9_1_2:	ex9_1_2.o
ex9_2_1:	ex9_2_1.o
ex9_2_2:	ex9_2_2.o
ex9_3:		ex9_3.o SimpleList.cpp
ex9_4:		ex9_4.o SimpleList2.cpp
ex9_5:		ex9_5.o SimpleList3.cpp

q9_1:		q9_1.o ../canvas/canvas.o
q9_2:		q9_2.o ../canvas/canvas.o
q9_3:		q9_3.o SimpleList.o
q9_4:		q9_4.o BidirectionalList.o

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
