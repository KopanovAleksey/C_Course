all: main.exe

main.exe: main.o sensor.o
	gcc -o main main.o sensor.o
main.o: main.c	
	gcc -c --std=c99 -o  main.o main.c
sensor.o: sensor.c sensor.h
	gcc -c --std=c99 -o  sensor.o sensor.c

clean:
	del *.o