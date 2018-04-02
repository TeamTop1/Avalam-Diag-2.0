all: build/avalam build/avalam-diag

INC=-I./include
LIB=-L./lib-src

build/avalam.o : example/diag.c
	gcc $(INC) -c example/diag.c -o build/avalam.o

build/avalam:build/avalam.o
	gcc $(LIB) build/avalam.o -o build/avalam -lavalam


build/avalam-diag:build/avalam.o
	gcc $(LIB) -static build/avalam.o -o build/avalam-diag -lavalam


clean:
	rm -f build/*
