#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<endl<<endl;
    while(t>0)
    {
        int f,a,i,j,k;
        cin>>f;
        cout<<endl;
        cin>>a;

        for( k=1; k<=a; k++)
        {
            for( i=1; i<=f; i++)
            {
                for(j=1; j<=f; j++)
                {
                    if(i>=j)
                        cout<<i;
                }
                cout<<endl;
            }
            for(i=f-1; i>0; i--)
            {

                for(j=1; j<=f-1; j++)
                {
                    if(i>=j)
                        cout<<i;
                }
                cout<<endl;
            }
            if(a>k)
            cout<<endl<<endl;
        }
        cout<<endl;
        t--;
    }

    return 0;
}
