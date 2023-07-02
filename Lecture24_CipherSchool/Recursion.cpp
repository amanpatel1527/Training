#include <iostream>
#include <stack>
using namespace std;

int fib(int num)
{
    // Base case
    if(num==0||num==1)
    {
        return 1;
    }
    int final = fib(num - 1) + fib(num - 2);
    return final;
}
int main()
{
    
    int inp;
    cout << "Enter the nuber you want to find the fibonicci series to:" << endl;
    cin >> inp;

    cout << fib(inp);
    return 0;
}