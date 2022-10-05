#ifndef COCKTAILSORTER_H
#define COCKTAILSORTER_H
#include <ISorter.h>
class CocktailSorter : public ISorter
{
public:
    void sort(int arr[], int arrayLength);
    void printArray(int arr[], int arrayLength);
};
#endif