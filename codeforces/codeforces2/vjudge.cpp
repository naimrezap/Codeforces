#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

        int t;
        cin>>t;
        while(t--)
        {
            int n,m;
            cin>>n>>m;
            vector<int>v(n);
            for(int i=0;i<n;i++)
            {
                cin>>v[i];
            }
            ll s=0,mm=1,d=1;
            while(m--)
            {

                char a;
                int b,c;
                cin>>a;
                if(a=='S')
                {
                    cin>>b;
                    s+=b;


                }
                else if(a=='M')
                {
                    cin>>b;
                    mm*=b;
                }
                else if(a=='D')
                {
                    cin>>b;
                    d*=b;
                }
                else
                {
                    cin>>b>>c;
                    swap(v[b],v[c]);
                }
            }
            for(int i=0;i<n;i++)
            {
                cout<<(((v[i]/d)*mm)+s)<<" ";
            }
            cout<<endl;
        }
    return 0;
}
