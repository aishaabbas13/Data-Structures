#Place this makefile in the same directory as your
#all .cpp and .h files
#at the command prompt
#make
#./hw8 (or whatever you call the TARGET)

#for use with c++ files
.SUFFIXES : .cpp

#Compile with g++
CC = g++

#use -g for gnu debugger and -std= for c++11 compiling
CXXFLAGS = -g -std=c++11

######Change to match all .cpp files.  Do not include .h files####
OBJS = main.o BSTree.o

######Change from hw1 to hw8.#######
TARGET = hw8

######Do NOT change this...Tabs Matter!#########
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

.cpp.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

#In order to get rid of all .o files create, at the command prompt
#make clean

clean:
	rm -f $(OBJS) $(TARGET) core

