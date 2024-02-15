#include<iostream>
using namespace std;
int main()
{
    int m[10],pm,i,j,t;
    for(i=0;i<=9;i++)
    cin>>m[i];
    for(i=0;i<=9;i++)
    {
        t=m[i];
        for(j=1;j<=9;j++){
            if(m[i]<m[j])
            {
              pm=m[j];
              m[j]=t;
              t=pm;
            }

        }

    }
     for(i=0;i<=9;i++)
    cout<<m[i]<<endl;

    return 0;
}
