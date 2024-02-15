#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1,s2;
    cin>>s1>>s2;
    int s=0,p=0,q=0;
    for(int i=0; i<s1.length(); i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);

    }

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]==s2[i])
           {
                continue;
           }
        else
        {
            if(s1[i]>s2[i])
            s=1;
            else s=-1;

        }
        break;

    }


    cout<<s<<endl;
    return 0;
}


