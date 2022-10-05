#ifndef SORTINGMACHINE_H
#define SORTINGMACHINE_H
#include <ISorter.h>
class SortingMachine
{
private:
    ISorter *_sortMethod;

public:
    SortingMachine(ISorter *sortMethod);
    void setSortingMethod(ISorter *sortMethod);
    void sort(int arr[], int arrayLength);
};
#endif