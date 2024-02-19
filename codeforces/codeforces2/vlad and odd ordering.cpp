#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll s=0;

void solution()
{
	
	ll n,k,i=1,b;
	cin>>n>>k;
	while(1)
	{
		b=(n+1)/2;
		if(b>=k)
		{
			cout<<(2*k-1)*i<<endl;
			return;
		}
		i*=2;
		n/=2;
		k-=b;
	}
		
		
	
	
	
	
}
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		solution();
	}
	return 0;
}