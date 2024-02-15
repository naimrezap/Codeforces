#include<bits/stdc++.h>
using namespace std;
int main()
{
    int col=5,row=5,s=0,k,l;
    int a[row][col];
    for(int i=0;i<row; i++)
    {
        for(int j=0;j<col; j++)
        {
            cin>>a[i][j];
        }
    }
     for(int i=0;i<row; i++)
    {
        for(int j=0;j<col; j++)
        {
            if (a[i][j]==1){
                k=i+1;l=j+1;
                break;
            }
        }
    }

    s=abs(3-k)+abs(3-l);


    cout<<s<<endl;
    return 0;
}

