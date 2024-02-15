#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	  int N,X,i;
	  cin>>N>>X;

    while(1){
      if(X>N)
          {
              X=X-N-1;
          }
          else
            break;}

    cout<<X<<endl;


	t--;

    }
	return 0;
}

