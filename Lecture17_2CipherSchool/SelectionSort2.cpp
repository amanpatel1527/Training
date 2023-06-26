#include <iostream>

using namespace std;
int main()
{
    int a[10];
    cout << "Enter the elements in an array:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int least_index;

    int j;
    for (int i = 0; i < 9; i++)
    {
        least_index = i;
        for (int j = i; j < 10; j++)
        {
            if (a[j] < a[least_index])
            {
                least_index = j;
            }
            int temp;
            temp = a[i];
            a[i] = a[least_index];
            a[least_index] = temp;
        }
    }
    cout << "After sorting" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}