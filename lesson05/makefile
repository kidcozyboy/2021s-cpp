#
#	makefile
#

CXX		=	g++
CXXFLAGS	=	$(CXXINCLUDE) $(DEBUG)
CXXINCLUDE	=
LINK.o		=	$(LINK.cc)
#LDLIBS		=	-lgdi32
DEBUG		=	
DEBUG		=	-Wall
#DEBUG		=	-#all -g
ZIPCMD		=	zip

TARGET		=	$(TARGET_EX) $(TARGET_QZ)
TARGET_EX	=	ex5_1 ex5_2 ex5_3 ex5_3a ex5_4
TARGET_QZ	=	q5_1 q5_2 q5_3
TARGET_BUILD	=	ex5_2 ex5_3 ex5_3a ex5_4 $(TARGET_QZ)

OBJS		=	$(OBJS_EX) $(OBJS_QZ)
OBJS_EX		=	ex5_1.o ex5_2.o ex5_3.o ex5_3a.o ex5_4.o \
			Date2.o Account.o Account2.o 
OBJS_QZ		=	q5_1.o q5_2.o q5_3.o \
			DoubleArray.o Point.o Line.o Point2.o Line2.o

WEXECS		=	$(WEXECS_EX) $(WEXECS_QZ)
WEXECS_EX	=	ex5_1.exe ex5_2.exe ex5_3.exe ex5_3a.exe ex5_4.exe
WEXECS_QZ	=	q5_1.exe q5_2.exe q5_3.exe

WORKDIR		=	lesson05

ARCHIVE		=	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:		$(TARGET_BUILD)

clean:	
		-$(RM) $(WEXECS) $(OBJS) $(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/q*.cpp $(WORKDIR)/Complex1.h $(WORKDIR)/Complex1.cpp $(WORKDIR)/Complex2.h $(WORKDIR)/Complex2.cpp $(WORKDIR)/Complex.h $(WORKDIR)/Complex.cpp )

ex5_1:		ex5_1.o
ex5_2:		ex5_2.o Date2.o
ex5_3a:		ex5_3a.o Date2.o
ex5_3:		ex5_3.o Date3.o
ex5_4:		ex5_4.o Date4.o
ex5_5:		ex5_5.o Date5.o
q5_1:		q5_1.o Complex1.o
q5_2:		q5_2.o Complex2.o
q5_3:		q5_3.o Complex.o

ex5_1.o:	ex5_1.cpp
ex5_2.o:	ex5_2.cpp Date2.h
ex5_3a.o:	ex5_3a.cpp Date2.h
ex5_3.o:	ex5_3.cpp Date3.h
ex5_4.o:	ex5_4.cpp Date4.h
ex5_5.o:	ex5_5.cpp Date5.h
q5_1.o:		q5_1.cpp Complex1.h
q5_2.o:		q5_2.cpp Complex2.h
q5_3.o:		q5_3.cpp Complex.h

Date2.o:	Date2.cpp Date2.h
Date3.o:	Date3.cpp Date3.h
Date4.o:	Date4.cpp Date4.h
Date5.o:	Date5.cpp Date5.h

Complex1.o:	Complex1.cpp Complex1.h
Complex2.o:	Complex2.cpp Complex2.h
Complex.o:	Complex.cpp Complex.h

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
