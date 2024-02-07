#include <iostream>
using namespace std ;
 
int main()
{

    string name;
    int age;
    string city;
    string country;
    float monthly_salary;
    float yearly_salary;
    char gender;
    bool married;


    cout << "enter your name: ";
    cin >> name ;
    cout << "enter your age: ";
    cin >> age;
    cout << "enter your city: ";
    cin >> city;
    cout << "enter your country: ";
    cin >> country;
    cout << "enter your monthly salary";
    cin >> monthly_salary;
    cout << "enter your gender: ";
    cin >> gender;
    cout << "are you married?";
    cin >> married;

    cout << "\nthis is your data.\n\n";
    cout << "__________________\n";
    cout << "Name: " << name;
    cout << "\nAge: " << age;
    cout << "\nCity: " << city;
    cout << "\nCountry: " << country;
    cout << "\nMonthly salary: " << monthly_salary;
    cout << "\nYearly salary: " << monthly_salary*12;
    cout << "\nGender: " << gender;
    cout << "\nMarried: " << married;
    cout << "\n_________________\n";

    return 0;




}