#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,s1=0,s2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){//6 5 3 6 3 8 3
        cin>>a[i];
    }

    p=*max_element(a,a+n);
    q=*min_element(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==p)
            break;
            else s1++;
    }
     for(int i=n-1;i>=0;i--){
        if(a[i]==q)
            break;
            else s2++;
    }
    if((s1+s2)<n)
        cout<<s1+s2<<endl;
    else
        cout<<s1+s2-1<<endl;
    return 0;
}
