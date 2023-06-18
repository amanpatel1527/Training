#include <iostream>
#include <stack>
using namespace std;
// int sum(int a, int b)
// {
//     int c;
//     c = a + b;
//     a = 10;
//     b = 11;
//     return c;
// }
int sum(int a, int b); // I have declared that a function called sum but the body of the function is not defined
int main()
{
    int a, b;
    a = 3;
    b = 4;
    int c;
    cout << a << " " << b << endl;
    c = sum(a,b);
    cout<<c<<endl;
    return 0;
}

int sum(int a, int b)
{
    return a + b; //I have declared that this function returns an int and assigns the result of a + b to c. This way, I can return different types of values.

}