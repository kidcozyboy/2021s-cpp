#
#	makefile
#

CXX		=	g++
CXXFLAGS	=	$(CXXINCLUDE) $(DEBUG)
CXXINCLUDE	=
DEBUG		=
## DEBUG		=	-g
ZIPCMD		=	zip


TARGET	=	ex2_1 ex2_2 ex2_3 ex2_4 \
		q2_1 q2_2 q2_3 q2_4

WEXECS	=	ex2_1.exe ex2_2.exe ex2_3.exe ex2_4.exe \
		q2_1.exe q2_2.exe q2_3.exe q2_4.exe

ARCHIVE	=	lesson02.zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

clean:	
	-$(RM) $(WEXECS) $(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) lesson02/q*.cpp)

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
