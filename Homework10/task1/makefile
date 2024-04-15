all: task1.exe

task1.exe: task1.o io.o
	gcc -o task1 task1.o io.o
task1.o: task1.c	
	gcc -c --std=c99 -o  task1.o task1.c
io.o: io.c
	gcc -c --std=c99 -o  io.o io.c

clean:
	del *.o
	del *.exe
	del output.txt