// While Loops
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // int i = 1;
    // while (i < 10)
    // {
    //     cout << i << " "; //Loop
    //     i++; // increment the  value

    // }
    int input;
    int i = 100;
    for (int i = 0; i < 101; i++)
    {
        cin >> input;
        if (input == 65)
        {
            cout << "Congrats !!!";
            break;
        }
    }

    return 0;
}