#To use this make file, navigate to the directory containing the makefile and type "make"
#		

all: bob

remake: clean bob run

bob: bob.c
	gcc -std=c11 -o myawesomeprogram.exe bob.c
	
run: myawesomeprogram.exe
	./myawesomeprogram.exe
	
clean:
	rm myawesomeprogram.exe

