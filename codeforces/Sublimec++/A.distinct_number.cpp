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
	
	int n;
	cin>>n;
	string a,b,c;
	cin>>a>>b>>c;
	int ans=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			
			if(a[i]!=c[i])
			{
				ans=1;
				
			}
			
			
			
		}
		else
		{
			if(a[i]==c[i] || b[i]==c[i])
			{
				ans=0;
				break;
			}
		}
		
	}
	if(ans==1) yes;
	else no;
	
	
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