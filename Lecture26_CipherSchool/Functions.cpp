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

    // I also want to find the marks of a student

    void display_Marks()
    {
        float total_marks;
        total_marks = midNo * 0.5 + endNo * 0.75;
        cout << "The marks of " << name << " is " << total_marks;
    }
    void calculate_fail_probs()
    {
        if (endNo <= 10)
        {
            cout << "Sorry you're fail!!";
        }
        else {
            cout<<endl<<"Congrats ";
        }
    }
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
    // int d, e, f; // here d,e,f are type of int
    // Vehicles suzuki, ferrari, verna;

    a.name = "Monu";
    a.midNo = 88;
    a.endNo = 87;
    a.att = 1;
    a.display_Marks();
    a.calculate_fail_probs();

    Vehicles d;
    d.car_name = "verna";
    d.tyre_name = "MRF";
    d.Number_of_seats = 5;
    d.Number_of_typers = 4;

    return 0;
}