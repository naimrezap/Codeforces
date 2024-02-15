#include<bits/stdc++.h>
using  namespace std;
int main()
{
    string s1;
    cin>>s1;
    for(int i=0;i<s1.length();i=i+2)
    {
        for(int j=i+2;j<s1.length();j=j+2)
        {
            if(s1[i]>s1[j])
            {
                int tem=s1[i];
                s1[i]=s1[j];
                s1[j]=tem;
            }
        }
    }
    cout<<s1<<endl;
    return 0;
}
