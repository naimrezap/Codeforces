#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int i=0,k=0;;
        int j=n-1;


        while(i<n)

        {
            if(v[i]==v[j])
            {
                i++;j--;
                while(i<j)
                {
                    if(v[i]!=v[j])
                    {
                       k=1;
                       break;
                    }
                }
            }
            else
            {
                if(v[i]==v[j] && v[i+1]==v[j-1])
                {
                    while((i+1)<j)
                    {
                        if(v[i]!=v[i+1] && v[j]!=v[j-1])
                        {
                            k=1;
                            break;
                        }
                    }
                }
                else {
                        while((i+1)<j){
                    if(v[i]==v[i+1] || v[j] ==v[j-1])
                    {
                        k=1;
                        break;
                    }
                        }
                }
            }
            if(k==1)
                break;
        }
        if(k==1)
            cout<<"NO"<<endl;

    }
    return 0;
}
