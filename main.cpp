#include <iostream>

using namespace std;

int main()
{
    int p,w,l,A,r;
    int const pi=3.14;
    cout << "A*******perimeter of rectangle*******" << endl;
    cout <<"enter length of rectangle=";
    cin >>l;
    cout <<"enter the width of rectangle=";
    cin >>w;
    p=2*(l+w);
    cout <<"perimetr of giver rectangle is="<<p<<endl;
    cout <<"B*******area of circle*******"<<endl;
    cout <<"enter the radius of circle=";
    cin >>r;
    A=(r*r)*pi;
    cout <<"area of circle ="<<A<<endl;
    return 0;
}
