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

TARGET	=	ex3_1 ex3_2 ex3_3 ex3_4 \
		q3_1 q3_2 q3_3 q3_4

OBJS	=	ex3_1.o ex3_2.o ex3_3.o ex3_4.o Car.o \
		q3_1.o q3_2.o q3_3.o q3_4.o DoubleArray.o Car2.o Book.o Counter3.o

WEXECS	=	ex3_1.exe ex3_2.exe ex3_3.exe ex3_4.exe \
		q3_1.exe q3_2.exe q3_3.exe q3_4.exe

WORKDIR	=	lesson03

ARCHIVE	=	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

clean:	
	-$(RM) $(WEXECS) $(OBJS) $(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/q*.cpp $(WORKDIR)/DoubleArray.h $(WORKDIR)/DoubleArray.cpp $(WORKDIR)/Car2.h $(WORKDIR)/Car2.cpp $(WORKDIR)/Book.h $(WORKDIR)/Book.cpp $(WORKDIR)/Counter3.h $(WORKDIR)/Counter3.cpp $(WORKDIR)/makefile)

ex3_1:		ex3_1.o
ex3_2:		ex3_2.o Car.o
ex3_3:		ex3_3.o
ex3_4:		ex3_4.o
q3_1:	q3_1.o DoubleArray.o
q3_2:	q3_2.o Car2.o
q3_3:	q3_3.o Book.o
q3_4:	q3_4.o Counter3.o

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
