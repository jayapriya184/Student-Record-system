outfile:addstud.o deletestud.o showstud.o modifystud.o savestud.o sortstud.o main.o
	cc addstud.c deletestud.c showstud.c modifystud.c savestud.c sortstud.c main.c -o student

addstud.o:addstud.c
	cc -c addstud.c

deletestud.o:deletestud.c
	cc -c deletestud.c

showstud.o:showstud.c
	cc -c showstud.c

modifystud.o:modifystud.c
	cc -c modifystud.c

savestud.o:savestud.c
	cc -c savestud.c

sortstud.o:sortstud.c
	cc -c sortstud.c

main.o:main.c
	cc -c main.c
