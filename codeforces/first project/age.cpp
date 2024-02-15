
#include<iostream>
using namespace std;
class people
{
private:
    int pday,pmonth,pyear;
    int bday,bmonth,byear;
    int day,month,year;
public:
    void set_basic()
    {
        cout<<"pday:";
        cin>>pday;
         cout<<"\npmonth:";
        cin>>pmonth;
         cout<<"\npyear:";
        cin>>pyear;
         cout<<"\nbday:";
        cin>>bday;
         cout<<"\nbmonth:";
        cin>>bmonth;
         cout<<"\nbyear:";
        cin>>byear;


    }
    void get_age()
    {
        if(pday>=bday)
        {
            day=pday-bday;

        }
        else
        {
            day=(pday+30)-bday;
            pmonth=pmonth-1;

        }
        if(pmonth>=bmonth)
        {
            month=pmonth-bmonth;

        }
        else
        {
            month=(pmonth+12)-bmonth;
            pyear=pyear-1;

        }
        year=pyear-byear;
        cout<<"day:"<<day<<"\nmonth"<<month<<"\nyear"<<year;



    }


};
int main()
{
    people naim;
    naim.set_basic();
    naim.get_age();







    return 0;
}
