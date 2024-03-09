#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "==calculate the task duration in days==\n";             //   مشروحه    
    cout << "Enter the seconds : ";

    
   int totall_seconds;
    cin >>  totall_seconds;

   int seconds_per_day = 24*pow(60,2);
   int seconds_per_hour = pow(60,2);
   int seconds_per_minute = 60;

   int number_of_days = totall_seconds / seconds_per_day;
   int remeinder1 = totall_seconds % seconds_per_day;
   int number_of_hours = remeinder1 / seconds_per_hour;
   int remeinder2 = remeinder1 % seconds_per_hour;
   int number_of_minutes = remeinder2 / seconds_per_minute;
   int remeinder3 = remeinder2 % seconds_per_minute;
   int number_of_seconds =remeinder3;



    cout << "total days = " << number_of_days << ":" << number_of_hours << ":" << number_of_minutes << ":" << number_of_seconds ;  

    cout << "\nround total days = " << round(number_of_days) << ":" << round(number_of_hours) << ":" << round(number_of_minutes) << ":" << round(number_of_seconds) ;  

    return 0;

}
