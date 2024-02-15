#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[8][8];
        int r=0,b=0;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
                cin>>a[i][j];

        }
        for(int i=0; i<8; i++)
        {
            r=0;
            for(int j=0; j<8; j++)
            {
                if(a[i][j]=='R')
                {
                    r++;
                }
            }
            if(r==8)
               break;

        }
        if(r==8)
             cout<<"R"<<endl;
        else
             cout<<"B"<<endl;

    }
    return 0;
}
