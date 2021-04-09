#
#	makefile
#

CXX		=	g++
CXXFLAGS	=	$(CXXINCLUDE) $(DEBUG)
CXXINCLUDE	=
DEBUG		=
## DEBUG		=	-g
ZIPCMD		=	zip


TARGET	=	ex1_1 ex1_2 ex1_3 ex1_4 \
		q1_1 q1_2 q1_3 q1_4 q1_5 q1_6

WEXECS	=	ex1_1.exe ex1_2.exe ex1_3.exe ex1_4.exe \
		q1_1.exe q1_2.exe q1_3.exe q1_4.exe q1_5.exe q1_6.exe

ARCHIVE	=	lesson01.zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

clean:	
	-$(RM) $(WEXECS) $(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) lesson01/q*.cpp)

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
