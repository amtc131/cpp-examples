# Makefile for writing Make Files Example
# **************************************************
# Variables to control Makefile operation
CC = g++
C = gcc
CFLAGS = -Wall -g
# *************************************************
SOURCE_C = foo.c
OBJECTS_C = foo.o

SOURCE_CXX = charpter_01.cpp

TARGET = charpter_01
LDFLAGS_COMMON = -o

all:
	$(C) -c $(SOURCE_C)
	$(CC) $(SOURCE_CXX) $(OBJECTS_C) $(LDFLAGS_COMMON) $(TARGET)
clean:
	rm -rf *.o $(TARGET)
