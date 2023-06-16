#include <iostream>

using namespace std;
int main()
{
    int pswd;
    cout << "Enter the Password" << endl;
    cin >> pswd;
    // if(pswd<999999){
    //     cout<<"The password is not valid"<<endl;
    // }
    //*************** While Loop
    // while (pswd < 999999)
    // {
    //     cout << "The password is  not valid" << endl;
    //     cin >> pswd;
    // }
    // cout << "The Passwod is valid now";

    // ***********Do While Loop
    // do
    // {
    //     cin >> pswd;
    // } while (pswd > 999999);


    // ******While infinty Loop

    // int count = 0;
    // while (pswd)
    // {
    //     cout << "Chocaltes ";
    //     count++;
    //     if (count > 10) break;
    // }
    int i;
    for(i=0; ;i++)
    {
        // cout<<"Hello "<<i<<endl;
        cout<<i<<" ";
        if(i>10) break;
    }
    return 0;
}