probingFuncLib: probingFuncLib.o myStringLib.o
	gcc -o probingFuncLib probingFuncLib.o myStringLib.o
probingFuncLib.o: probingFuncLib.c
	gcc -c probingFuncLib.c
myStringLib.o: myStringLib.c myStringLib.h
	gcc -c myStringLib.c 
