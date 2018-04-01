all: build/avalam build/avalam-static

INC=-I./include
LIB=-L./lib-src

build/avalam.o : example/main.c
	gcc $(INC) -c example/main.c -o build/avalam.o

build/avalam:build/avalam.o 
	gcc $(LIB) build/avalam.o -o build/avalam -lavalam


build/avalam-static:build/avalam.o 
	gcc $(LIB) -static build/avalam.o -o build/avalam-static -lavalam

build/avalamDiag: example/maindiag.c
	gcc $(INC) -c example/maindiag.c -o build/avalamDiag.o
	
build/avalam-diag: build/avalamDiag.o
	gcc $(LIB) -static build/avalamDiag.o -o build/avalam-diag -lavalam
	
clean: 
	rm -f build/*
