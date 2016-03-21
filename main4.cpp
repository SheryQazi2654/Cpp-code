#include <iostream>

using namespace std;

int main()
{
    cout << "program for elapsed time" << endl;
    int hours, mins, sec;
    cout <<"enter hours to event=";
    cin >>hours;
    cout <<endl;
    cout <<"enter minutes to the event=";
    cin >>mins;
    cout <<"enter seconds to event=";
    cin >>sec;
    cout <<endl;
    cout <<"given time to event = hours : minutes : seconds"<<hours<<" : "<<mins<<" : "<<sec<<endl;
    mins=mins+(hours*60);
    sec=sec+(mins*60);
    cout <<"total seconds to event are="<<sec<<endl;
    return 0;
}
