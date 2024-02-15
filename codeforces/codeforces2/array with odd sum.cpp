
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n,sp=0,sm=0;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]%2==0)
                    sp++;
                else sm++;

            }

            if(sp==0)
                {
                    if(sm%2==0)
                        cout<<"NO"<<endl;
                    else
                        cout<<"YES"<<endl;
                }
            else if(sm==0)
                cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

        }
        return 0;

    }

