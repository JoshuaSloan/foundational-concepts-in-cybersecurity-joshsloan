CC=g++

all: ex1 nonEx1 ex5 nonEx5 ex3_7_8_9 nonEx3_7_8_9

ex1: example_1.cpp
	$(CC) $(CFLAGS)  -o ex1 example_1.cpp

nonEx1: nonexample_1.cpp
	$(CC) $(CFLAGS)  -o nonEx1 nonexample_1.cpp

ex5: example_5.cpp
	$(CC) $(CFLAGS)  -o ex5 example_5.cpp

nonEx5: nonexample_5.cpp
	$(CC) $(CFLAGS)  -o nonEx5 nonexample_5.cpp

ex3_7_8_9: four_principles_example.cpp superStack.h
	$(CC) $(CFLAGS)  -o ex3_7_8_9 -std=c++11 four_principles_example.cpp superStack.h

nonEx3_7_8_9: four_principles_non-example.cpp
	$(CC) $(CFLAGS)  -o nonEx3_7_8_9 -std=c++11 four_principles_non-example.cpp

clean: 
	rm -f ex1 nonEx1 ex5 nonEx5 ex3_7_8_9 nonEx3_7_8_9
