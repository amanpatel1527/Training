#include <iostream>
using namespace std;
void greet() // void is used when there is no return value
{
    cout << "Hello World" << endl; // prints Hello World
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{

    greet(); // prints Hello World
    int result = sum(3, 5);
    cout<<result;
    return 0;
}