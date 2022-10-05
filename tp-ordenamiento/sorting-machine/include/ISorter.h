#ifndef ISORTER_H
#define ISORTER_H
class ISorter
{
public:
    virtual ~ISorter(){};
    virtual void sort(int arr[], int arrayLength) = 0;
    virtual void printArray(int arr[], int arrayLength) = 0;
};
#endif