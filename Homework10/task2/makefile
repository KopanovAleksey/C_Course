all: task2.exe

task2.exe: task2.o io.o
	gcc -o task2 task2.o io.o
task2.o: task2.c	
	gcc -c --std=c99 -o  task2.o task2.c
io.o: io.c
	gcc -c --std=c99 -o  io.o io.c

clean:
	del *.o
	del *.exe
	del output.txt