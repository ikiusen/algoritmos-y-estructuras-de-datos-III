#include <SortingMachine.h>

SortingMachine::SortingMachine(ISorter *sortMethod) : _sortMethod(sortMethod){};

void SortingMachine::setSortingMethod(ISorter *sortMethod)
{
    delete _sortMethod;
    _sortMethod = sortMethod;
}

void SortingMachine::sort(int arr[])
{
    _sortMethod->sort(arr);
}