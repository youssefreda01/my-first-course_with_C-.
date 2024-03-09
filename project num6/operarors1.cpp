#include <iostream>
using namespace std;
int main()
{
    bool operation1;
    operation1 = (5 > 6 && 7==7) || (1||0);

    bool operation2;
    operation2 = !(5>6 && 7==7) || (1||1);

    bool operation3;
    operation3 = !(5>6 && 7==7) || !(1||0);

    bool operation4;
    operation4 = !(5>6 || 7==7) && !(1||0);

    bool operation5;
    operation5 = ((5>6 && 7<=8) || (8>1&&4<=3))&&1;

    bool operation6;
    operation6 = ((5>6 && !(7<=8)) && (8>1||4<=3))||1;

    cout << operation1 << operation2 << operation3 << operation4 << operation5 << operation6 ;

    return 0;

} 