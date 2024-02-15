
#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    while(n>0)
    {
        int p,v,t;
        cin>>p>>v>>t;
        if(p==1)
        {
            if(v==1)
            {
                if(t==1)
                    c++;
                else
                    c++;
            }
            else if(t==1)
                        c++;


        }
        else if(v==1)

            {
                if(t==1)
                    c++;
            }

            n--;
        }
        cout<<c<<endl;
        return 0;
    }
