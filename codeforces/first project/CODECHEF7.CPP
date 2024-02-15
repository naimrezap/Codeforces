#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
      long n,i,k,z=0,o=0;
      cin>>n;
      long s[n];
      for(i=0;i<n;i++)
      {
          cin>>s[i];


      }
      for(i=0;i<n;i++)
      {
        if(s[i]==0)
            z++;
        else
            o++;

      }
     k=z-o;
     if(k==0 || k==1 || k==-1)
        cout<<"yes\n";
      else
        cout<<"no\n";
        t--;
    }
    return 0;
}


