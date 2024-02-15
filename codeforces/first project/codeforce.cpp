#include<iostream>
using namespace std;
int main()
{
    long t;
    cin>>t;
    cout<<"\n";
    while(t>0){
            long i,k,num;
            char str[10000],str2[10000];
    cin>>num;
     cout<<"\n";
    for(i=0;i<num;i++)
    {
        cin>>str[i];
    }
    cin>>k;
     cout<<"\n";
    for(i=0;i<k;i++)
    {
        cout<<str[i];
        str2[i]=str[i];
    }
    for(i=k-1;i>=0;i--)
    {
        cout<<str2[i];
    }



   t--;
    }
    return 0;
}

