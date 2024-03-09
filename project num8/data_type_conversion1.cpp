#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n_1 = 20;
    double n_2 = 59.56;
    float n_3 = 625.29;

    string st1,st2,st3;

    st1 = to_string(n_1);
    st2 = to_string(n_2);
    st3 = to_string(n_3);

    n_3 = int (n_3);
    n_3 = (int) n_3;

    cout << st1;
    cout << "\n" << st2;
    cout << "\n" << st3;
    cout << "\n" << n_3;

    return 0;




}