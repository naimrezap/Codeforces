#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double s=0;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      s=s+a[i];
    }
    cout<<(double)s/n<<endl;
    return 0;
}
