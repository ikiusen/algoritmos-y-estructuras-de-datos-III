#include <iostream>
using namespace std;

int partition(int dataArray[], int start, int end)
{

    int pivot = dataArray[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (dataArray[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(dataArray[pivotIndex], dataArray[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (dataArray[i] <= pivot)
        {
            i++;
        }

        while (dataArray[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(dataArray[i++], dataArray[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int dataArray[], int start, int end)
{
    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(dataArray, start, end);

    // Sorting the left part
    quickSort(dataArray, start, p - 1);

    // Sorting the right part
    quickSort(dataArray, p + 1, end);
}

int main()
{

    int dataArray[] = {9, 3, 4, 2, 1, 8, 10, 14, 5, 9, 6, 20, 11, 15, 13};
    //int n = 15;
    int n = sizeof(dataArray) / sizeof(dataArray[0]);
    cout << n;
    quickSort(dataArray, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << dataArray[i] << " ";
    }

    return 0;
}