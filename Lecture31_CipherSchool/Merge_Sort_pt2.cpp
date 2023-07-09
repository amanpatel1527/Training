#include <iostream>
#include <stack>
using namespace std;

void merge(int *arr, int start, int end)
{
    // We need to merge the 2 sorted array
    // the arr actualy has been sorted

    
}

void mergeSort(int *arr, int start, int end)
{
    // This recursion also needs to have a base case

    if (start >= end) // There's only one element
    {
        return;
    }

    int mid;
    mid = (start + end) / 2;

    // We are also using the same code to sort the smaller arrays
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    // But after we have a sorted the smaler arrays , er need to merge them into one array
    merge(arr, start, end);
}
int main()
{
    int size_arr;
    int arr[5] = {1, 5, 3, 10, 4};
    size_arr = 5;
    mergeSort(arr, 0, size_arr - 1);
    return 0;
}