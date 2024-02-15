#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[2];
    for(int a=0;a<2;a++)
    {
        cin>>s[a];
    }
    char card[5][2];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<2;j++)
            cin>>card[i][j];
    }
     for(int i=0;i<5;i++)
    {
        if(s[0]==card[i][0] || s[1]==card[i][1])
        {
            cout<<"YES"<<endl;
            break;

        }
        else if(i==4)
        cout<<"NO"<<endl;

    }
    return 0;
}
