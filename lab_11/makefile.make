gcc -std=c99 -Wall -Werror -g3 -pedantic -c func.c
gcc -std=c99 -Wall -Werror -g3 -pedantic -c lab11.c
gcc -o lab11.exe func.o lab11.o
./lab11.exe
rm -rf *.o
rm -rf *.exe