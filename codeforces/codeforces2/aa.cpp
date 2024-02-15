
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     long int n,max=0,s=1,i,k=0;
	    cin>>n;


	    long long a[n];
	    for( i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(i=0;i<n-1;i++)
	    {
	        if(a[i]==a[i+1])
	          {s+=1;}
	        else
	        {
	            if(s>=max)
	            max=s;

	            s=0;
	        }

	    }
	    if(max==0)
	    max=s;
	    if(n<=4)
        {
            if(max<=2)
                k=1;
                else
                    k=0;

        }
        if((2*max-1)<=n)
            k=1;
        else
            k=0;
        if(k==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
	}
	return 0;
}
