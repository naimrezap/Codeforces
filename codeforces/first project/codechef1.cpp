#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T>0)
    {
        double T1,T2,R1,R2,p,q;
        cin>>T1>>T2>>R1>>R2;
        p=(T1*T1)/(R1*R1*R1);
        q=(T2*T2)/(R2*R2*R2);
        if (p==q)
            cout<<"YES\n";

        else cout<<"NO\n";


	  T--;


	}

	return 0;
}
