#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int i,f,s=0;
        scanf("%d",&f);

        for(i=0; i<f; i++)
        {
            int y,g,p;
            cin>>y>>g>>p;
            s=s+(y*p);

        }

        cout<<s<<endl;

        t--;
    }

    return 0;
}
