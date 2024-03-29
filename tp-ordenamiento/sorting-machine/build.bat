:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\CocktailSorter.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\ShellSorter.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\QuickSorter.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\SortingMachine.cpp
g++ -Wall -std=c++11 -I.\include\ -c main.cpp

:: Enlazo y genero el binario
g++ CocktailSorter.o ShellSorter.o QuickSorter.o SortingMachine.o main.o -o sorter.exe

:: Limpio los códigos objeto
DEL .\*.o