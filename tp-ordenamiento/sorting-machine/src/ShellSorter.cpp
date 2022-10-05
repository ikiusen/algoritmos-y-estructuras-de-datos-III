#include <ShellSorter.h>
#include <iostream>

void ShellSorter::sort(int arr[], int arrayLength)
{
    for (int gap = arrayLength / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < arrayLength; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
    printArray(arr, arrayLength);
}

void ShellSorter::printArray(int arr[], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
        std::cout << arr[i] << " ";
    std::cout << "" << std::endl;
}