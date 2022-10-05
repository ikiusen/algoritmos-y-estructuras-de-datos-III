#include <iostream>
#include <ISorter.h>
#include <CocktailSorter.h>
#include <QuickSorter.h>
#include <ShellSorter.h>
#include <SortingMachine.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "" << std::endl;
}

int main()
{
    int option, dataSetLength;
    int dataSet[] = {60, 92, 132, 93, 145, 131, 97, 148, 24, 69, 149, 32, 18, 53, 72, 5, 2, 42, 67, 89,
                     103, 101, 115, 82, 49, 94, 122, 28, 124, 57, 106, 15, 128, 13, 35, 98, 105, 91, 38, 147, 59,
                     37, 113, 11, 96, 52, 134, 36, 116, 4, 63, 111, 95, 141, 48, 84, 88, 120, 80, 26, 31, 114,
                     104, 146, 58, 40, 138, 100, 87, 108, 34, 50, 130, 21, 74, 29, 45, 75, 102, 76, 25, 150, 64,
                     41, 117, 127, 22, 19, 46, 14, 55, 39, 61, 54, 135, 85, 110, 125, 118, 142};
    dataSetLength = sizeof(dataSet) / sizeof(dataSet[0]);
    ISorter *sortingMethod = new CocktailSorter();
    SortingMachine *sortingMachine = new SortingMachine(sortingMethod);
    std::cout << "Unsorted data set: " << std::endl;
    printArray(dataSet, dataSetLength);
    std::cout << "Sorting with Cocktail Sort method.." << std::endl;
    sortingMachine->sort(dataSet, dataSetLength);
    sortingMachine->setSortingMethod(new ShellSorter());
    std::cout << "Sorting with Shell Sort method.." << std::endl;
    sortingMachine->sort(dataSet, dataSetLength);
    sortingMachine->setSortingMethod(new QuickSorter());
    std::cout << "Sorting with Quick Sort method.." << std::endl;
    sortingMachine->sort(dataSet, dataSetLength);

    return 0;
}