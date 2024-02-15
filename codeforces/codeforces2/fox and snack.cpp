#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s=0;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        if((i+1)%2==0)
        {
            s++;
            for(int j=0; j<b; j++)
            {

                if(s%2==1)
                {
                    if(j==(b-1))
                        cout<<"#";
                    else
                    {
                        cout<<".";
                    }
                }
                else
                {

                    if(j==0)
                        cout<<"#";
                    else
                    {
                        cout<<".";
                    }
                }

            }
        }
        else

        {
            for(int j=0; j<b; j++)
                cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
