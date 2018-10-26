func.o: func.h error.h func.c
	gcc -std=c99 -Wall -Werror -g3 -pedantic -c func.c
main.o: func.h error.h main.c
	gcc -std=c99 -Wall -Werror -g3 -pedantic -c main.c
main.exe: func.o main.o
	gcc -o main.exe func.o main.o
run: main.exe
    ./main.exe in_1.txt out.txt -s ro -r DONE
clean:
	rm -rf *.o
clean:
	rm -rf *.exe