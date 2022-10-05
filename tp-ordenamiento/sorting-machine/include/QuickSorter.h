#ifndef QUICKSORTER_H
#define QUICKSORTER_H
#include <ISorter.h>
class QuickSorter : public ISorter
{
public:
    QuickSorter();
    ~QuickSorter();
    void sort(int arr[]);
};
#endif