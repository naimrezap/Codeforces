#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n=0;
    if(a==b)
        n+=1;
    else
    {
        while(1)
        {
            if((a*3)>(b*2))
            {
                n++;
               break;
            }
            else
            {
                a=a*3;
                b=b*2;
                 n++;
            }
        }

    }
     cout<<n<<endl;

    return 0;
}
