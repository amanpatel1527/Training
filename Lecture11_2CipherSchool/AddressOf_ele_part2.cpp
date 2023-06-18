#include <iostream>
#include <stack>
using namespace std;
int main()
{
    long long int a;
    int b;
    float c;

    cout << "the size of int is :" << sizeof(a) << endl
         << " the size of long long int is " << sizeof(b) << endl;
    cout << "The address of a is " << &a << "The address of b is " << &b << endl;
    cout << "The address of c is " << &c;
    return 0;
}