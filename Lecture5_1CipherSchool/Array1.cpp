#include <iostream>

using namespace std;
int main()
{
    int x; // variable name x of type int can store a single integer value which means that it cannot be store more than one integer value

    // Arrays can used to store multiple integers vales in a single variable

    int arr[5]; // array of integers stored 5 values in a single variable
    // elements starting from 0 to 5 in above example
    // the first element will have an index of 0 ---> arr[0]
    // the second element will have an index of 1 ---> arr[1]

    int a, b, c, d, e;
    cout << "Enter 5 integer as input" << endl;
    cin >> a >> b >> c >> d >> e;

    cout << "The integer in reverse order are:" << e <<d << c << b << a;

    return 0;
}