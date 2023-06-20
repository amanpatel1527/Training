#include <iostream>

using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Swapping is complete" << endl;
}
int main()
{
    int a, b;
    a = 3;
    b = 4;
    cout << "The value of a and b before swapping is " << a << " " << b << endl;
        swap(&a, &b);
    cout << "The value of a and b after swapping  is " << a << " " << b << endl;
    return 0;
}