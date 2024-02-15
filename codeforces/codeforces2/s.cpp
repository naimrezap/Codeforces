#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	  int n,p=0;
	  cin>>n;
	  int a[n],b[n];
	 for(int i=0; i<n; i++)
	  {
	      cin>>a[i];

	  }
	  for(int i=0; i<n; i++)
	  {
	      cin>>b[i];

	  }
	   for(int i=0; i<n; i++)
	  {
	      if(a[i]!=b[i])
	      {

	      p++;
	     }
	  }
	  if(p%2==1)
	  cout<<0<<endl;
	  else
	  cout<<1<<endl;
	  t--;
	}
	return 0;
}
