#include <iostream>
using namespace std;
int main()
{


    cout << "==this program for calculate total pennies,nickels,dimes,quarters,dlloars==\n";            // شارح نفسو
    cout << "Enter pennies,nickels,dimes,quarters,dlloars: ";
    
    float pennies,nickels,dimes,quarters,dlloars;
    cin >> pennies >> nickels >> dimes >> quarters >> dlloars;

    float total_pennies = (pennies*1)+(nickels*5)+(dimes*10)+(quarters*25)+(dlloars*100);


    cout << "total pennies =  " << total_pennies << "\n";
    cout << "total nickels = " << total_pennies/5 <<"\n";
    cout << "total dimes = " << total_pennies/10 <<"\n";
    cout << "total quarters = " << total_pennies/25 <<"\n";
    cout << "total dollars = " << total_pennies/100 <<"\n";


    return 0;

}



     