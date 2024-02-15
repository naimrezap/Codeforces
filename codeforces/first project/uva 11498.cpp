#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int t;
        cin>>t;
        if(t==0)
            break;
        else
        {
            int n,m,i,x,y;
            cin>>n>>m;
            for(i=1; i<=t; i++)
            {
                cin>>x>>y;
                if(x==n || y==m)
                    cout<<"divisa"<<endl;
                else if(x>n)
                {
                    if(y>m)
                        cout<<"NE"<<endl;
                    else
                        cout<<"SE"<<endl;
                }
                else
                {
                    if(y>m)
                        cout<<"NO"<<endl;
                    else
                        cout<<"SO"<<endl;
                }
            }
        }
    }
    return 0;
}
