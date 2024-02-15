#include <bits/stdc++.h>
#define ln cout<<endl
#define ll long long
//#define ll int
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define f(a,b) for(int i=a;i<b;i++)
#define vin vector<int>
#define vll vector<long long>
 
using namespace std;
 
void Mar_sala(int p)
{
	ll n,k,a,b;
	cin>>n>>k>>a>>b;
	ll ans=0;
	
	ll lab=(n+6)/7;
	ll l=0,h=n,m=0;
	while(h>=l)
	{
		m=(l+h)/2;
		ll get=a*m+b*min(2*m,lab);
		if(k<=get)
		{
			ans=m;
			h=m-1;
			
			
		}
		else l=m+1;
	}
	cout<<n-ans<<endl;
	
}
 
int main()
{
	ll t,j;
	cin>>t;
	j=1;
	while(t--)
	{
		Mar_sala(j++);
	}
	
	
	return 0;
}