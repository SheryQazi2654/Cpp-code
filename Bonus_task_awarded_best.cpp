#include <iostream>

using namespace std;

int main()
{
    cout <<"            bonus task             "<<endl;
    cout <<"***********************************"<<endl;
    int day,month,day_number;
    float daysBYmonth;
    long int year;
    cout <<"enter the year "<<endl;
    cin >>year;
    cout << "enter month"<<endl;
    cin >>month;
    cout <<"enter day"<<endl;
    cin >>day;
    if (day<=31 && month<=12)
    {
          if (year % 4 == 0 && year % 100 != 0)
            {
                if (month>=2)
                    {
                        daysBYmonth=(month-1)*30.4167;//actually according to astronomy, every month in a years (when given equal number of days) is equal to = 30.4167
                        day_number=1+day+daysBYmonth;
                        cout <<"day_number="<<day_number<<endl;
                    }
                else
                    {
                        daysBYmonth=(month-1)*30.4167;
                        day_number=day+daysBYmonth;
                        cout <<"day_number="<<day_number<<endl;
                    }

            }
        else
            {
                if (month==2 && day==29)
                    {
                        cout <<"wrong input!!! 29th february can't be in a normal year***check you year again"<<endl;
                    }
                else
                    {
                        daysBYmonth=(month-1)*30.4167;
                        day_number=day+daysBYmonth;
                        cout <<"day_number="<<day_number<<endl;
                    }
            }
    }
        else
            cout <<"wrong input!!! you are either entering month or day or both of these wrong"<<endl;
        return 0;
}
