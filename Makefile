all:
	gcc -Wall -O2 -o rgwc wc.c

install:
	sudo cp rgwc /usr/local/bin