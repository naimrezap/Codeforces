#include<iostream>
using namespace std;
int main()
{
    int n=1,i,c=1;
   while(1){
    if(n%2==0 || n%3==0 || n%5==0)
    {
        for(i=7;i<=n/7;i=i+2)
        {
            if(n%i==0 )
            {
               continue;
            }

        }
         c++;
                if(c==1500){
                    cout<<n<<endl;
                break;}
    }
    n++;
   }


    return 0;
}
