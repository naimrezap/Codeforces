#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	    int A,B,C,e;
	    cin>>A>>B>>C;
	    e=A+B+C;
	    if(e==180)
	       cout<<"YES"<<endl;
	   else
	         cout<<"NO"<<endl;

	 t--;
	}
	return 0;
}
