#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

   for(int j=1;j<=t;j++){
        int n;
   cin>>n;
   int s[n];
   for(int i=0;i<n;i++)
   {
       cin>>s[i];
   }

        cout<<"Case "<<j<<": "<<s[(n-1)/2]<<endl;
    }
    return 0;
}
