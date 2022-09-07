CC = g++

math: math_stuff.o math_utils.o
	$(CC) math_stuff.o math_utils.o -o math

math_stuff.o: math_stuff.cpp
	$(CC) -c math_stuff.cpp

math_utils.o: math_utils.cpp
	$(CC) -c math_utils.cpp