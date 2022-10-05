#include <CocktailSorter.h>
#include <iostream>

void CocktailSorter::sort(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped)
    {
        swapped = false;

        for (int i = start; i < end; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
        swapped = false;

        --end;

        for (int i = end - 1; i >= start; --i)
        {
            if (arr[i] > arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
    printArray(arr);
}

void CocktailSorter::printArray(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << std::endl;
}