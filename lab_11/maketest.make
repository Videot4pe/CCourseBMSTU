gcc -std=c99 -Wall -Werror -g3 -pedantic -c func.c
gcc -std=c99 -Wall -Werror -g3 -pedantic -c unittest.c
gcc -o unittest.exe func.o unittest.o
./unittest.exe
rm -rf *.o
rm -rf *.exe