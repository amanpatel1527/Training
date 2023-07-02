#include <iostream>
#include <stack>
using namespace std;

// We achieve this using something called a class
//  A class is a user defined datatype which can be customized however we want

class student
{
public:
    string name;
    int midNo;
    int endNo;
    bool att;
};

class Vehicles
{
public:
    string car_name;
    string tyre_name;
    int Number_of_typers;
    int Number_of_seats;
};
int main()
{
    // There are a classof 30 students and each students has the data
    student a, b, c;
    // here a,b,c are types of students user defined data types
    // a,b,c over here are objects of the  particular class
    int d, e, f; // here d,e,f are type of int
    Vehicles suzuki,ferrari,verna;
    return 0;
}