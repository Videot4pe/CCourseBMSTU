func.o: func.h error.h func.c
	gcc -std=c99 -Wall -Werror -g3 -pedantic -c func.c
unittest.o: func.h error.h unittest.c
	gcc -std=c99 -Wall -Werror -g3 -pedantic -c unittest.c
unittest.exe: func.o unittest.o
	gcc -o unittest.exe func.o unittest.o
run: unittest.exe
    ./unittest.exe
clean:
	rm -rf *.o
clean:
	rm -rf *.exe
