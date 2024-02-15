#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int a1[n],a2[n],a3[n];
    int c1,c2,c3;
    int n1,n2,n3;
    n1=0;
    n2=0;
    n3=0;
    c1=0;
    c2=0;
    c3=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            a1[c1++]=i+1;
            n1++;

        }
       else if(arr[i]==2)
        {
            a2[c2++]=i+1;
            n2++;

        }
        else
        {
            a3[c3++]=i+1;
            n3++;

        }
    }
    int total_team=min(n1,min(n2,n3));
    cout<<total_team<<endl;
    for(int i=0;i<total_team;i++)
    {
        cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
    }

    return 0;
}
