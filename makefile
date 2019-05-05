# variable

CC = gcc
CFLAGES = -Wall -lm -g

# if you have muti main

all: test_utils

# target: dependency
#	command

test_utils: test_utils.c utils.o
	$(CC) $(CFLAGES) -o test_utils test_utils.c utils.c


utils.o: utils.c
	$(CC) $(CFLAGES) -c utils.c

clean:
	rm *.o test_utils