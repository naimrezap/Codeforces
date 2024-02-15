#include<iostream>
using namespace std;
int sum(int x,int n)
{
    int y=0;
    if(x<10)
        return y+1;
    else
    {
        while(x>0)
        {
            x=x/n;
            y++;
        }
        return y;
    }

}
int rev(int a)
{
    int e=0;
    while(a>0)
    {
        e=e*10+a%10;
        a=a/10;
    }
    return e;
}
int zero(int p)
{
    int q,r=0;
    while(p>0)
    {
       q=p%10;
       if(q==0)
            r++;
       p=p/10;
    }
    return r;
}
int main()
{
    int a,n,k,s,z,t,f=1,p=0;
    cin>>a>>n;
    for(int i=1;i<=a;i++)
        f=f*i;
   // cout<<f;
   if(n==10){
    p=f;
    s=sum(p,n);
    z=zero(p);
    }
   else{
        while(f>0){
        k=f%n;

        p=p*10+k;
        f=f/n;

        }
         t=rev(p);
        s=sum(t,n);
        z=zero(t);
   }
   cout<<z<<" "<<s<<endl;

  //  cout<<s;
    return 0;
}
