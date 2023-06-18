#include <iostream>
#include <stack>
using namespace std;

void print()
{
    cout << "Hii" << endl;
}
int sum(int a, int b)
{
    int c = a + b;
    a = 500;
    b = 600;
    cout << "The value of c is " << c << endl;
    return c;
}
int main()
{
    print();
    int a, b;
    int c;
    a = 4;
    b = 6;
    c = 75;
    int result = sum(a, b);
    cout << result << endl;
    cout << "The value of c is " << c << endl;
    return 0;
}