DEPS=-I../inc -I../src
CC=g++
CFLAGS=-c $(DEPS) -w -std=c++14 -Wall
LIBRARIES=-lncurses
ProjectName = TERM_UI_1

all: run

run: output
	@./output

.PHONY: all run rebuild

build:
	@echo "Building..."
	@make -B --no-print-directory

rebuild:
	@make clean --no-print-directory
	@echo "Rebuilding..."
	@make -B --no-print-directory

output: main.o Project.o Table.o
	$(CC) main.o Project.o Table.o -o output $(LIBRARIES)

main.o: ../src/main.cpp
	$(CC) $(CFLAGS) ../src/main.cpp

Project.o: ../src/Project.cpp ../inc/Project.hpp
	$(CC) $(CFLAGS) ../src/Project.cpp

Table.o: ../src/Table.cpp ../inc/Table.hpp
	$(CC) $(CFLAGS) ../src/Table.cpp

clean:
	@echo "Cleaning..."
	rm *.o output
