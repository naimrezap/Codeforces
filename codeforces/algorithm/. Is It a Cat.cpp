#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	  ll n,a,b,x,y;
	cin>>n>>a>>b>>x>>y;
	 a--;
	 b--;
	 x--;
	 y--;
	 a=min(a,(n-a-1));
	 b=min(b,(n-b-1));
	 x=min(x,(n-x-1));
	 y=min(y,(n-y-1));
	 ll aa=min(a,b);
	 ll xx=min(x,y);

	  cout<<abs(xx-aa)<<endl;

	}
	return 0;
}
