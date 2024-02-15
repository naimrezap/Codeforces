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
 
void Mar_sala(int p1)
{
	ll a,b,x,y,p,q;
	cin>>a>>b>>x>>y>>p>>q;
	int ans=0;
	if(a==1 || p<=x) ans=1;
	else if(b<=3)
	{
		int r=p-x;
		if(r%2==0) ans=3;
		else ans=2;
	}
	else 
	{
		if(p-x<=3) 
		{
			if((p-x)%2==0) ans=3;
			else ans=3;
		}
		else ans=1;
	}
	if(ans==1) cout<<"Draw"<<endl;
	else if(ans==2) cout<<"Alice"<<endl;
	else cout<<"Bob"<<endl; 
	
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