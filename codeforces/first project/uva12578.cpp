#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        double l,r,w,area_r,area_s,pi=acos(-1);
        cin>>l;
        w=(6.00*l)/10.00;
        r=(2.00*l)/10.00;
        area_r=pi*r*r;
        area_s=(l*w)-area_r;

        printf("%0.2lf %0.2lf\n",area_r,area_s);
        t--;
    }

    return 0;
}
