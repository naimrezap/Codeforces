#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int max1=0,c=0;
    for(int i=0;i<a.size();)
    {
        if(a[i]=='0')
        {
            c=1;
            ++i;
            while(a[i]=='0')
            {
                c++;                //10000000
                i++;
                if(c==7)
                {
                    max1=1;
                    break;
                }
            }
        }
       else
        {
            c=1;
            ++i;
            while(a[i]=='1')
            {
                c++;
                i++;
                if(c==7)
                {
                    max1=1;
                    break;
                }
            }

        }
        if(max1==1)
                break;
    }
    if(max1==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
