#ifndef COCKTAILSORTER_H
#define COCKTAILSORTER_H
#include <ISorter.h>
class CocktailSorter : public ISorter
{
public:
    void sort(int arr[]);
    void printArray(int arr[]);
};
#endif