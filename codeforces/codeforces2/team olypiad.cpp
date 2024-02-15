#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],a1[n],a2[n],a3[n];
    int index1,index2,index3,n1,n2,n3;
    index1=index2=index3=0;
    n1=n2=n3=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            a1[index1++]=i+1;
            n1++;
        }
         if(a[i]==2)
        {
            a2[index2++]=i+1;
            n2++;
        }
         if(a[i]==3)
        {
            a3[index3++]=i+1;
            n3++;
        }


    }
    int num=min(n1,min(n2,n3));
    cout<<num<<endl;
    for(int i=0; i<num; i++)
    {
        cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
    }

    return 0;
}
