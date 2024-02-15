#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,s=0;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=="Tetrahedron")
            s=s+4;
       else  if(a[i]=="Cube")
            s=s+6;
      else      if(a[i]=="Octahedron")
            s=s+8;
       else     if(a[i]=="Dodecahedron")
            s=s+12;
          else
            s=s+20;
    }
    cout<<s<<endl;
    return 0;
}
