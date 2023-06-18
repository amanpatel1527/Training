#include <iostream>

using namespace std;
int compare(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a, b;
    cout << "Enter the 2 numbers" << endl;
    cin >> a >> b;
    int result = compare(a, b);
    cout<<"Greater number is : "<<result;
    return 0;
}