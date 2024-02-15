#include<iostream>

using namespace std;
int main()
{
  int n,k,s=0;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {

      if((a[i]+k)<=5)
       s++;
  }
  cout<<(s/3)<<endl;


    return 0;
}

