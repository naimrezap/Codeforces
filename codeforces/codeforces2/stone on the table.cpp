#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1=0,n;

    cin>>n;
    char s[n];

   for(int i=0;i<n;i++)
     cin>>s[i];

    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            s1++;
    }
    cout<<s1<<endl;

    return 0;
}
