## Ubuntu 14.04LTS X86_64 g++4.8.2

## Vim && Sublime Text 3 

## Completed at 2014.1.8

## Any bugs,please send a email to tq0317@gmail.com.
## 
objects=seperator.o ullman_init.o ullman_utils.o main.o ullman_query.o\
	   	ullman_build.o graph.o\

all : ullman

CXXFLAGS= -g -pg -O2

ullman : $(objects)
	g++ -o ullman -g $(objects) -pg -O2

seperator.o : seperator.h
graph.o : graph.h
ullman_build.o : ullman.h
ullman_utils.o : ullman_utils.h
ullman_init.o : ullman.h
ullman_query.o : ullman.h
main.o : common.h ullman.h ullman_utils.h

.PHONY : clean all

clean :
	rm -rf $(objects) ullman
