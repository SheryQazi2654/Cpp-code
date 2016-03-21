#include <iostream>

using namespace std;

int main()
{
    cout << "program to calculate change" << endl;
    const int half=50;
    const int quat=25;
    const int dine=10;
    const int nikel=5;
    int change;
    cout <<"enter the cents to be changed=";
    cin >>change;
    cout <<"amount to be changed in half dollars="<<change/half;
    change=change%half;
    cout<<endl;
    cout << "amount to be changed in quarter dollars="<< change/quat<<endl;
    change = change%quat;
    cout << "amount to be changed in dines="<<change/dine<< endl;
    change=change%dine;
    cout << "amount to be changed in nikels="<<change/nikel<<endl;
    change=change%nikel;
    cout << "amount in pennies="<<change<<endl;
    return 0;
}
