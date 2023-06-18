#include <iostream>

using namespace std;
int main()
{
    int a;
    int b;
    int *p;
    int *q;
    p = &a;
    q = &b;
    // a = 1;
    // *p = 3;
    a =2;
    b = 5;
    int c = *p+*q;
    cout<<"The value of c is "<<c<<endl;
    cout << "The value of a is : " << a << endl;
    cout << "The value of a from the pointer using * " << *p << endl;
    
    return 0;
}