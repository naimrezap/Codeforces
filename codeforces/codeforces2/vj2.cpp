#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int a{0};
    int b{0};
    cin>>a>>b;
      int ans{0};



    string v[a];

    for(int i=0; i<a; i++)
    {
        cin>>v[i];

    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {

            if(v[i][j]=='=')
            {

                for(int k=i-1;k>=0;k--)
                {
                    if(v[k][j]=='O') ans++;
                    else if(v[k][j] == 'a') break;
                }
            }

        }
    }
    cout<<ans<<endl;



    return 0;
}
