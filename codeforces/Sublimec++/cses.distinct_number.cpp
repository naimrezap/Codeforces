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

void Mar_sala()
{
	ll n;
	cin>>n;
	vector<ll>v(n);
	set<ll> s;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		s.insert(v[i]);
	}
	cout<<s.size()<<endl;
	//F:/Sublimec++/First.cpp
}
 
int main()
{
	ll t,j;
	//cin>>t;
	//j=1;
	//while(t--)
	//{
		Mar_sala();
	//}
	
	
	return 0;
}
