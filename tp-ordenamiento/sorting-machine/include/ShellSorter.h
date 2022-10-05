#ifndef SHELLSORTER_H
#define SHELLSORTER_H
#include <ISorter.h>
class ShellSorter : public ISorter
{
public:
    ShellSorter();
    ~ShellSorter();
    void sort(int arr[]);
};
#endif