#ifndef QUICKSORTER_H
#define QUICKSORTER_H
#include <ISorter.h>
class QuickSorter : public ISorter
{
public:
    void sort(int arr[], int arrayLength);
    void printArray(int arr[], int arrayLength);
    int partition(int arr[], int start, int end);
    void quickSort(int arr[], int start, int end);
};
#endif