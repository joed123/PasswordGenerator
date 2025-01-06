
mame: prompts.o encrypter.o 
	g++ -o mame prompts.o encrypter.o

#mame: prompts.o g++ -o mame prompts.o 

prompts.o: Prompts.c++ control.h
	g++ -c Prompts.c++

encrypter.o: encrypter.c++ control2.h 
	g++ -c encrypter.c++

clean: 
	-rm -f ${mame prompts.o encrypter.o}

#clean:  -rm -f ${mame prompts.o}