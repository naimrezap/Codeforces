#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution()
{
	ll n;
	cin>>n;
	ll ss=1,ans=0,ans2=1;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		
	}
	ans=v[0];
	for(int i=1;i<n;i++)
	{
		if(v[i]==v[0])
		ss++;
		else break;
	}
	if(ss==n)
	{
		cout<<0<<endl;
		return;
	}
	
	for(int i=n-2;i>=0;i--)
	{
		if(v[i]==v[n-1]) ans2++;
		else break;
	}
	if(v[n-1]!=ans) ans2=max(ans2,ss);
	else ans2=ans2+ss;
	cout<<n-ans2<<endl;
	
	
	
	
	
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