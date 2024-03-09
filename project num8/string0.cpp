#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "please enter string1  : ";
    string st1;
    getline(cin, st1);  

    cout << "\nplease enter string2 : ";
    string st2;
    getline(cin, st2);

    cout << "\nplease enter string3 : ";
    string st3;
    getline(cin, st3);

    cout << "\n*************************";

    cout << "\nthe length of string1 is : " << st1.length();
    cout << "\ncharacters at 2,3,5 are : " << st1[2] << st1[3] << st1[5] ;
    cout << "\nconcatenating string2 and string3 = " << st2+st3 ;

    int sum = stoi(st2) + stoi(st3) ;
    cout << "\nsum of int st2,st3 = " << sum;

    return 0;  



}