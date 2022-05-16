bitwisemenu: major1.o clz.o endian.o rotate.o parity.o
	gcc -Wall -o bitwisemenu major1.o clz.o endian.o rotate.o parity.o

major1.o: major1.h
	gcc -c major1.c
	
clz.o: major1.h
	gcc -c clz.c

endian.o: major1.h
	gcc -c endian.c

rotate.o: major1.h
	gcc -c rotate.c

parity.o: major1.h
	gcc -c parity.c

run: 
	./bitwisemenu

rebuild: 
	touch major1.h
	make

clean:
	rm bitwisemenu
	rm major1.o
	rm clz.o
	rm endian.o
	rm rotate.o
	rm parity.o