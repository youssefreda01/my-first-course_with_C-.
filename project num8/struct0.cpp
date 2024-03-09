#include <iostream>
using namespace std;

struct contact_info
{
    int num_phone;
    string email;
};


struct address
{

       string Street_name;
       int bulding_num;

};
struct info
{
      string Name;
      int Age;
      string City;
      string Country;
      float Monthly_selary;
      float Yearly_selary;
      char Grander;
      bool Married;
      address Address;
       contact_info Cnnection_info;                 


};


int main()
{
    info information;

    

    cout << "enter  informations : \n";
    cout << "Name : \n";
    cin >> information.Name;
    cout << "Age : \n";
    cin >> information.Age;
    cout << "City : \n";
    cin >> information.City;
    cout << "Country : \n";
    cin >> information.Country;
    cout << "Monthly selary : \n";
    cin >> information.Monthly_selary;
    cout << "Yearly selary : \n";
    cin >> information.Yearly_selary;
    cout << "Grander : \n";
    cin >> information.Grander;
    cout << "Married : \n";                     
    cin >> information.Married;
    cout << "Street name : \n";                     
    cin >> information.Address.Street_name;
    cout << "Phone number : \n";
    cin >> information.Cnnection_info.num_phone;
                                                                             //وهكذا الموضوع كبير بس ده عشان لو هراجع
    
    cout << "informations for person1 : \n\n";
    cout << information.Name << "\n" << information.Age << "\n" << information.City << "\n" << information.Country << "\n" << information.Monthly_selary << "\n" << information.Yearly_selary; 
    


    return 0;
}




