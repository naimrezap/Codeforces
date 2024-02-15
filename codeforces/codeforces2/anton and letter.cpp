#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sl;
    sl=s.length();
    string b;
    int j=0,sum=1;
    if(sl<=2)
        cout<<0<<endl;
    else
    {
       for(int i=1;i<sl;i+=3)
    {
       b[j++]=s[i];

    }
    int c;
    c=b.length();
    sort(b.begin(),b.end());
     for(int i=0;i<c-1;i++)
    {
        if(b[i]==b[i+1])
            continue;
        else
            sum++;
    }
    }
    cout<<sum<<endl;


    return 0;
}
