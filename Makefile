# Copyright (c) 2022 Bravo Games. All rights reserved.
# Confidential, and distributed solely for the individual to whom it was
# addressed for the sole purpose of taking the test assignment. Redistribution,
# or any use for reasons other than taking the test assignment, are prohibited.

.PHONY: all clean

all: example

clean:
	rm -f *.o example

example: example.o
	${CXX} -g -o $@  $^ -lncurses

example.o: test.cpp 
	${CXX} -g -c -o $@  $<
	
