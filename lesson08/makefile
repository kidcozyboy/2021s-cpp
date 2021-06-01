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
TARGET_QZ	=	# q6_1 q6_2 q6_3 q6_4

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex8_1.o ex8_2.o ex8_3.o Point.o Rect.o Circle.o Shape.o Composite.o
OBJS_QZ		=	# q6_1.o q6_2.o q6_3.o q6_4.o 

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex8_1.exe ex8_2.exe ex8_3.exe
WEXECS_QZ	=	# q6_1.exe q6_2.exe q6_3.exe q6_4.exe

WORKDIR		=	lesson08

ARCHIVE		=	$(WORKDIR).zip

ZIP_SRCS	=	$(WORKDIR)/q7_1.cpp $(WORKDIR)/q7_2.cpp \
			$(WORKDIR)/q7_3.cpp $(WORKDIR)/q7_4.cpp

ZIP_HDRS	=	$(WORKDIR)/Color.h $(WORKDIR)/Point.h \
			$(WORKDIR)/Car1.h $(WORKDIR)/Car2.h \
			$(WORKDIR)/Car.h $(WORKDIR)/ColoredCar.h \
			$(WORKDIR)/Circle.h $(WORKDIR)/ColoredCircle.h

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


##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
