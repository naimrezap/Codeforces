#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int i,n,j,c;
        cin>>n;
        char s[n];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        if(n%2!=0)
        {
            cout<<"NOT"<<endl;
        }
        else
        {
            for(i=0,j=n/2;i<n/2;i++)
            {
                if(s[i]==s[j])
                    c++;
                else
                    break;

            }
           if(c==n/2)
                cout<<"YES"<<endl;

        }
        t--;
    }


    return 0;
}
