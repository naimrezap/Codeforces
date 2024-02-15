#include<iostream>
using namespace std;
int main()
{
    int x,k,r,s;
    cin>>x>>k;
    //int t=x/k;
    for(int i=k-1;i>=1;i--)
    {

        int p=(i*x/k)+((k-i)*x/k);
        if(p==x){
        r=i;
        s=(k-i);
        break;

        }

    }
    cout<<r<<" "<<s<<endl;

    return 0;
}
