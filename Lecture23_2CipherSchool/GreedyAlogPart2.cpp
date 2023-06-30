#include <iostream>
#include <stack>
using namespace std;
void printMaxClasses(int start[], int end[], int class_id[])
{
    cout << "The classes which you should attend to cover maximum of them : " << endl;
    cout << class_id[0];
    int temp;
    temp = end[0];
    for (int i = 1; i < 9; i++)
    {
        if (start[i] >= temp)
        {
            cout << class_id[i]<<" ";
            temp = end[i];
        }
    }
}
int main()
{
    int start[] = {2, 2, 4, 1, 5, 8, 9, 11, 13};
    int end[] = {3, 5, 7, 8, 9, 10, 11, 14, 16};
    int class_id[] = {4, 2,3, 1, 5, 6, 7, 8, 9};
    printMaxClasses(start, end, class_id);
    return 0;
}