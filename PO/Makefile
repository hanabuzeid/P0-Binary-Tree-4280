CC = g++ 
CXXFLAGS = -std=c++11 -Wall
LDFLAGS = 

# Makefile settings - Can be customized.
APPNAME = PO
EXT = .cpp
SRCDIR = ./
OBJDIR = obj
##########
.DEFAULT_GOAL := PO
PO: 
	g++ main.cpp tree.cpp tree.h node.h -o PO

clean:
	rm PO