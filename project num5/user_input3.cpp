#include <iostream>
using namespace std;

int main()
{
    cout << "*********************\n";
    cout << "**calculate age app**\n";
    cout << "*********************\n\n";

    int age;

    cout << "enter your age: ";
    cin >> age;

    int age_in_days = age*365;
    int age_in_hourse = age_in_days*24;
    int age_in_minutes = age_in_hourse*60;
    int age_in_seconds = age_in_minutes*60;

    cout << "\n\nage_in_days = " << age_in_days;
    cout << "\nage_in_hourse = " << age_in_hourse;
    cout << "\nage_in_minutes = " << age_in_minutes;
    cout << "\nage_in_seconds = " << age_in_seconds;


    return 0;                         




     
}