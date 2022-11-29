probingmyatoiHex: probingmyatoiHex.o myStringLib.o
	gcc -o probingmyatoiHex probingmyatoiHex.o myStringLib.o
probingmyatoi.o: probingmyatoiHex.c
	gcc -c probingmyatoiHex.c
myStringLib.o: myStringLib.c myStringLib.h
	gcc -c myStringLib.c 
