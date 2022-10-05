#ifndef SHELLSORTER_H
#define SHELLSORTER_H
#include <ISorter.h>
class ShellSorter : public ISorter
{
public:
    void sort(int arr[], int arrayLength);
    void printArray(int arr[], int arrayLength);
};
#endif