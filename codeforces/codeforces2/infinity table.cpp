#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b,r,c,i=1;
        cin>>a;
        while(1)
        {

            if((i*i)==a)
            {
                r=i;
                c=1;
                break;
            }
            else if((i*i)<a && ((i+1)*(i+1))>a)
            {
                b=i*i;
                if((a-b)>(i+1))
                {
                    r=i+1;
                    c=r-((a-b)-r);
                    break;
                }
                else
                {
                    c=i+1;
                    r=a-b;
                    break;
                }

            }
            i++;
        }
        cout<<r<<" "<<c<<endl;
    }

    return 0;
}
