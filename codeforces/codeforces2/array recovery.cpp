    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
           int n,tt=0;
           cin>>n;
           int b[n],d[n];
           for(int i=0;i<n;i++)
           {
               cin>>d[i];
           }
           b[0]=d[0];
           for(int i=1;i<n;i++)
           {
               b[i]=(d[i]+b[i-1]);
               if(d[i]<=b[i-1] && b[i]!=0 && d[i]!=0)
                tt=1;
           }
           if(tt)
            cout<<-1<<endl;
           else{
            for(int i=0;i<n;i++)
                cout<<b[i]<<" ";
           }
           cout<<endl;
        }
        return 0;
    }
