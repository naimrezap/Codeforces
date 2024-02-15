#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    long int yr;
    while(scanf("%ld",&yr)!=EOF)
    {
        if(yr>=2000)
        {
            if(yr%400==0 ||(yr%100!=0 && yr%4==0))
            {
                cout<<"This is leap year."<<endl;
                if(yr%15==0)
                {
                    cout<<"This is huluculu festival year."<<endl;
                }
                if(yr%55==0)
                    cout<<"This is bulukulu festival year."<<endl;
            }
            else if(yr%15==0)
            {
                cout<<"This is huluculu festival year."<<endl;
            }
            else   if(yr%55==0)
                    cout<<"This is bulukulu festival year."<<endl;
            else
            {
                cout<<"This is an ordinary year."<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}
