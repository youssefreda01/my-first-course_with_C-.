#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "==calculate the task duration in seconds==\n";               //مشروحه   
    cout << "Enter the days, hours, minutes, seconds";

    float days, hours, minutes, seconds;

    cin >> days >> hours >> minutes >> seconds;

    float totall_seconds = seconds + (minutes*60) + (hours*pow(60,2)) + (days*24*pow(60,2));

    cout << "total seconds = " << totall_seconds;
    cout << "\nround total seconds = " << round(totall_seconds);


    return 0;

}