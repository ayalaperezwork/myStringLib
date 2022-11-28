probingmyatoi: probingmyatoi.o myStringLib.o
	gcc -o probingmyatoi probingmyatoi.o myStringLib.o
probingmyatoi.o: probingmyatoi.c
	gcc -c probingmyatoi.c
myStringLib.o: myStringLib.c myStringLib.h
	gcc -c myStringLib.c 
