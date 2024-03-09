#include <iostream>
using namespace std;

enum name {youssef , mo , zeus };
enum color {red , blue , green , black};
enum gendor {famel , male};
enum status {marrid , nonmarrid};

int main() 
{
    name my_name;
    color my_color;
    gendor my_gender;
    status my_status;

    my_name = name::zeus;
    my_color = color::black;
    my_gender = gendor::male;
    my_status = status::nonmarrid;


    cout << "my name is: " << my_name; 
    cout << "\nmy color is: " << my_color; 
    cout << "\nmy gendor is: " << my_gender; 
    cout << "\nmy status is: " << my_status;

    return 0; 


}