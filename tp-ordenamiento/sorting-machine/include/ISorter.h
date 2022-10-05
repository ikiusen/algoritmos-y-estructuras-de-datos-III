#ifndef ISORTER_H
#define ISORTER_H
class ISorter
{
public:
    virtual ~ISorter(){};
    virtual void sort(int arr[]) = 0;
};
#endif