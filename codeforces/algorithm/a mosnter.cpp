#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   ll n;
	   cin>>n;
	   vector<ll>v;

	   while(n>0)
       {
           v.push_back(n%9);
           n/=9;
       }
       ll k=0;
       for(int i=v.size()-1;i>=0;i--)
       {
           k=k*10+v[i];
       }
	   string s=to_string(k);
	  // reverse(s.begin(),s.end());
	   replace(s.begin(),s.end(),'8','9');
        replace(s.begin(),s.end(),'7','8');
        replace(s.begin(),s.end(),'6','7');
        replace(s.begin(),s.end(),'5','6');
        replace(s.begin(),s.end(),'4','5');
        cout<<s<<endl;

	}
	return 0;
}
