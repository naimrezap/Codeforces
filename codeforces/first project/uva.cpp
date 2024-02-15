#include<iostream>
using namespace std;
int main()
{
    int i,j,count1=0,count2=0,h;
    long long temp;
    cin>>i>>j;
    temp=j;
    h=temp;
    while(j>=i)
    {
        temp=j;
        while(temp>=1)
        {
            count1++;

            if(temp==1)
                break;
            else if(temp%2==0)
                temp=temp/2;
            else
                temp=3*temp+1;
        }
        if(count1>=count2)
        {
            count2=count1;

        }
        count1=0;

        j--;
    }





    cout<<i<<" "<<h<<" "<<count2<<endl;

    return 0;
}
