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
TARGET_EX	=	ex6_1 ex6_2 ex6_3 ex6_4
TARGET_QZ	=	q6_1 q6_2 q6_3 q6_4

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex6_1.o ex6_2.o ex6_3.o ex6_4.o
OBJS_QZ		=	q6_1.o q6_2.o q6_3.o q6_4.o 

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex6_1.exe ex6_2.exe ex6_3.exe ex6_4.exe
WEXECS_QZ	=	q6_1.exe q6_2.exe q6_3.exe q6_4.exe

WORKDIR		=	lesson06

ARCHIVE		=	$(WORKDIR).zip

ZIP_SRCS	=	$(WORKDIR)/q6_1.cpp $(WORKDIR)/q6_2.cpp \
			$(WORKDIR)/q6_3.cpp $(WORKDIR)/q6_4.cpp
ZIP_HDRS	=	$(WORKDIR)/Member.h $(WORKDIR)/VipMember.h \
			$(WORKDIR)/ColoredCircle0.h $(WORKDIR)/Circle0.h \
			$(WORKDIR)/ColoredRect.h $(WORKDIR)/ColoredCircle.h \
			$(WORKDIR)/Rect.h $(WORKDIR)/Circle.h \
			$(WORKDIR)/Color.h $(WORKDIR)/Point.h
ZIP_MISC	=	$(WORKDIR)/makefile

default:
	@echo make XXX となるようにターゲットを指定してください

all:		$(TARGET)

quiz:		$(TARGET_QZ)

clean:	
		-$(RM) $(WEXECS) $(OBJS) $(TARGET) *.exe.stackdump

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(ZIP_SRCS) $(ZIP_HDRS) $(ZIP_MISC) )

ex6_1:		ex6_1.o
		$(LINK.o) $^ -o $@
ex6_2:		ex6_2.o
		$(LINK.o) $^ -o $@
ex6_3:		ex6_3.o ../canvas/canvas.o
ex6_4:		ex6_4.o ../canvas/canvas.o
q6_1:		q6_1.o
		$(LINK.o) $^ -o $@
q6_2:		q6_2.o ../canvas/canvas.o
q6_3:		q6_3.o ../canvas/canvas.o
q6_4:		q6_4.o ../canvas/canvas.o

ex6_1.o:	ex6_1.cpp Member.h VipMember0.h
ex6_2.o:	ex6_2.cpp 
ex6_3.o:	ex6_3.cpp ColoredRect0.h Rect0.h Color.h Point.h
ex6_4.o:	ex6_4.cpp ColoredRect0.h Rect0.h Color.h Point.h
q6_1.o:		q6_1.cpp Member.h VipMember.h
q6_2.o:		q6_2.cpp ColoredCircle0.h Circle0.h Color.h Point.h
q6_3.o:		q6_3.cpp ColoredRect.h ColoredCircle.h Rect.h Circle.h Color.h Point.h
q6_4.o:		q6_4.cpp ColoredRect.h ColoredCircle.h Rect.h Circle.h Color.h Point.h

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
