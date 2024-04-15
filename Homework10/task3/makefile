all: task3.exe

task3.exe: task3.o io.o
	gcc -o task3 task3.o io.o
task3.o: task3.c	
	gcc -c --std=c99 -o  task3.o task3.c
io.o: io.c
	gcc -c --std=c99 -o  io.o io.c

clean:
	del *.o
	del *.exe
	del output.txt