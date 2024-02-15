#include<iostream>
using namespace std;
int nam(long int n)
{
    long int a;
    a=n+11;
   if(a<=100)
    return a;
   else
   return n;
}
int main()
{
    while(1){
   long int v, n;
    cin>>n;
    if(n==0)
        break;
    else{
        if(n>=100)
    {
        v=n-10;

    }
    else
        v=nam(n);

    cout<<"f91("<<n<<") = "<<v<<endl;
    }

    }
    return 0;

}
