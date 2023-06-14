#include <iostream>

using namespace std;
int main()
{

    // int Arr[5]; // declares an array of 10 integers. In this case, the size is 10. The type of the array is int

    // cout << "Enter 5 values for the  array" << endl; // prompts user to enter 5 values for the array. The type of the values is int. The array is called Arr"
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> Arr[i];
    // }
    // cout << "The given  array  is: ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << Arr[i]<<" ";
    // }

    int arr[10];
    cout<<"Enter the 10 values for arraay"<<endl; //prompts user to enter 10 values for the array. The type of the values is int. The array is called Arr"

    for(int i=0;i<10;i++)
    {
        cin>>arr[i]; //input of the values into the array. The type of the values is int. The array is called Arr"
    }

    cout<<"The given array in reverse order is ";
    for(int i = 9;i>0;i--)
    {
        cout<<arr[i]<<" "; //output of the values in reverse order. The type of the values is int. The array is called Arr
    }
    return 0;
}