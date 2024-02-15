#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,p1,p2,q1,q2,s=0;
        cin>>c;
        char a[c][c];
        for(int i=0; i<c; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>a[i][j];

            }
        }
        for(int i=0; i<c; i++)
        {
            for(int j=0; j<c; j++)
            {

                if(s=0 && (a[i][j])=='#')
                {
                    s=1;
                    p1=i;
                    q1=j;
                }
                else if(s==1 && (a[i][j]=='#'))
                {
                    p2=i;
                    q2=j;
                    break;
                }
            }
        }
        if(p1==p2)
        {
            a[p1+1][q1]='#';
            a[p2+1][q2]='#';

        }
        else if(q1==q2)
        {
            a[p1][q1+1]='#';
            a[p2][q2+1]='#';
        }
        else
        {
            a[p2][q1]='#';
            a[p1][q2]='#';
        }

        for(int i=0; i<c; i++)
        {
            for(int j=0; j<c; j++)
            {

                cout<<a[i][j];

            }
            cout<<endl;
        }
    }

    return 0;
}
