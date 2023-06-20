#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    string b;
    string c;
    // int a,b,c;
    cin >> a >> b;
    cout << "The string which you have given as input ate " << a<< b << endl;
     c = a + b;
    cout << c << endl;
    cout<<"The kength of the string is " <<c.length()<< endl;
    return 0;
    // getline(cin,a);  instead of usingcin, you use something like a getline 
    // getline is a function 
}