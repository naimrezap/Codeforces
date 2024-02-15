#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long n;

    while(1)
    {
        cin>>n;
        long long a=0;
        long long c=0;
        if(n!=0)
        {
            int t=0;
           int i=0;
            while(n>0)
            {
                if(n%2==1)
                {
                   t=t*10+1;
                    c++;
                    i++;
                    n=n/2;

                    continue;
                }
                else{
                    t=t*10;
                     i++;
                    n=n/2;
                }

            }
            cout<<"The parity of "<<t<<" is "<<c<<"  (mod 2)."<<endl;


        }
        else
            break;
    }
    return 0;
}
