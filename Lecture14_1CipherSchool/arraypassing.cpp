#include <iostream>

using namespace std;
int main()
{
    int a[10];
    cout << "values for comparison: " << endl;
    cout << "The value of a is " << a << endl;
    cout << "The value of address of a[0] is " << &a[0] << endl;
    cout << "The value of address of a[1] is " << &a[1] << endl;
    return 0;
}