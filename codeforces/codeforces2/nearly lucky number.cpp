#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,j=0;
    string l;
    cin>>a;
    while(1)
    {
        l=to_string(a);
        if(l.length()<4)
        {
            cout<<"NO"<<endl;
            break;
        }
  else{
        for(int i=0;i<l.length();i++)
        {
            if(l[i]=='4' || l[i]=='7')
            {
                j++;
             continue;
            }

        }
        if(j==4 || j==7)
        {
            cout<<"YES"<<endl;

        }
        else
        {
             cout<<"NO"<<endl;
        }
        break;}

    }

    return 0;
}




