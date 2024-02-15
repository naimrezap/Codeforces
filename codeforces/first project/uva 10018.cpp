#include<iostream>
using namespace std;
int rev(int n)
{
    unsigned int r,revrse=0;
    while(n>0)
    {
        r=n%10;
        revrse=revrse*10+r;
        n=n/10;
    }


    return revrse;
}
int main()
{
    unsigned int t,c=1;
    long long n,r1;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        r1=rev(n);
        n=r1+n;
        while(1)
        {
            r1=rev(n);
            if(r1==n) break;
            n=r1+n;
            c++;
        }
        cout<<c<<" "<<n<<endl;
        t--;
    }

    return 0;
}


