#include <iostream>

using namespace std;

void merge(int *arr, int start, int end)
{
    // We need to merge the 2 sorted array
    // the arr actualy has been sorted

    int mid = (start + end) / 2;
    int len1,  len2;
    len1 = mid - start + 1; // This is the size of the first sorted array
    len2 = end - mid;       // This is the size of the second sorted array

    // Creating the array

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    // Creating th array by copying the elements
    int main_array_index = start;
    int i;
    for (i = 0; i < len1; i++)
    {
        arr1[i] = arr[main_array_index];
        main_array_index++;
    }

    for (i = 0; i < len2; i++)
    {
        arr2[i] = arr[main_array_index];
        main_array_index++;
    }

    // Now we have to copied both arrays into two small arrays

    int index1 = 0, index2 = 0;
    main_array_index = start;

    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[main_array_index] = arr1[index1];
            main_array_index++;
            index1++;
        }
        else
        {
            arr[main_array_index] = arr2[index2];
            main_array_index++;
            index2++;
        }
    }

    while (index1 < len1)
    {
        arr[main_array_index] = arr1[index1];
        main_array_index++;
        index1++;
    }
    while (index2 < len2)
    {
        arr[main_array_index] = arr2[index2];
        main_array_index++;
        index2++;
    }
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
    int k;
    for(k=0;k<size_arr;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}