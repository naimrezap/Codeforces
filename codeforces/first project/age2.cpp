#include<iostream>
#include<ctime>

using namespace std;
class age
{
    int d,m,y;
    int get_day()
    {
        int dy;
        time_t t=time(0);
        tm* ct=gmtime(&t);
        int cd=ct->tm_mday;

        if(cd>d)
            dy=cd-d;
        else
        {
            dy=cd+30-d;
            m+=1;
        }
        return dy;
    }
    int get_month()
    {
        int mn;
        time_t t=time(0);
        tm* ct=gmtime(&t);
        int cm=ct->tm_mon+1;

        if(cm>m)
            mn=cm-m;
        else
        {
            mn=cm+12-m;
            y+=1;
        }
        return mn;
    }
    int get_year()
    {
        int yr;
        time_t t=time(0);
        tm* ct=gmtime(&t);
        int cy=ct->tm_year+1900;

        yr=cy-y;
        return yr;

    }
public:
     void set_date(int a,int b,int c)
    {
        d=a;
        m=b;
        y=c;
    }
        void get_age()
        {
            cout<<"\nage:\n"<<"day: "<<get_day()<<"\nmonth: "<<get_month()<<"\nyear: "<<get_year()<<endl;
        }



};
int main()
{
    int day,mon,yr;
    cin>>day>>mon>>yr;
    cout<<"birth day:"<<day<<"\nbith month: "<<mon<<"\nbirth year: "<<yr;
    age naim;
    naim.set_date(day,mon,yr);
    naim.get_age();



}
