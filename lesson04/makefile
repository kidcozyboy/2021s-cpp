#
#	makefile
#

CXX		=	g++
CXXFLAGS	=	$(CXXINCLUDE) $(DEBUG)
CXXINCLUDE	=
LINK.o		=	$(LINK.cc)
#LDLIBS		=	-lgdi32
DEBUG		=
#DEBUG		=	-g
ZIPCMD		=	zip

TARGET		=	$(TARGET_EX) $(TARGET_QZ)
TARGET_EX	=	ex4_1 ex4_2 ex4_3 ex4_3a ex4_4
TERGET_QZ	=	q4_1 q4_2 q4_3

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex4_1.o ex4_2.o ex4_3.o ex4_4.o \
			IntArray.o Date.o Account.o Account2.o 
OBJS_QZ		=	q4_1.o q4_2.o q4_3.o

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex4_1.exe ex4_2.exe ex4_3.exe ex4_3a.exe ex4_4.exe
WEXECS_QZ	=	q4_1.exe q4_2.exe q4_3.exe

WORKDIR	=	lesson04

ARCHIVE	=	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:		$(TARGET)

clean:	
		-$(RM) $(WEXECS) $(OBJS) $(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/q*.cpp $(WORKDIR)/DoubleArray.h $(WORKDIR)/DoubleArray.cpp $(WORKDIR)/Line.h $(WORKDIR)/Line.cpp $(WORKDIR)/Point.h $(WORKDIR)/Point.cpp $(WORKDIR)/Line2.h $(WORKDIR)/Line2.cpp $(WORKDIR)/Point2.h $(WORKDIR)/Point2.cpp )

ex4_1:		ex4_1.o IntArray.o
ex4_2:		ex4_2.o IntArray.o
ex4_3:		ex4_3.o Account.o Date.o
ex4_3a:		ex4_3a.o Account2.o Date.o
ex4_4:		ex4_4.o
q4_1:		q4_1.o DoubleArray.o
q4_2:		q4_2.o Line.o Point.o
q4_3:		q4_3.o Line2.o Point2.o

ex4_1.o:	ex4_1.cpp IntArray.h
ex4_2.o:	ex4_2.cpp IntArray.h
ex4_3.o:	ex4_3.cpp Account.h Date.h
ex4_3a.o:	ex4_3a.cpp Account.h Date.h
ex4_4.o:	ex4_4.cpp Student.h
q4_1.o:		q4_1.cpp DoubleArray.h
q4_2.o:		q4_2.cpp Line.h Point.h
q4_3.o:		q4_3.cpp Line2.h Point2.h

IntArray.o:	IntArray.cpp IntArray.h
Account.o:	Account.cpp Account.h Date.h
Account2.o:	Account2.cpp Account.h Date.h
Date.o:		Date.cpp Date.h
DoubleArray.o:	DoubleArray.cpp DoubleArray.h
Line.o:		Line.cpp Line.h Point.h
Point.o:	Point.cpp Point.h
Line2.o:	Line2.cpp Line2.h Point2.h
Point2.o:	Point2.cpp Point2.h

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
