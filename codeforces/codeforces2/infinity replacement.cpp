    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        ll t;
        cin>>t;
        while(t--)
        {
            string a,b;
            cin>>a>>b;

            ll c=0,c1=0;
            for(int i=0;i<b.size();i++)
            {
                if(b[i]=='a')
                    c++;
                else c1++;
            }
            if(c>0 && c1>0)
                cout<<-1<<endl;
            else if(c==1 && c1==0)
                cout<<1<<endl;
            else if(c>1)
                cout<<-1<<endl;
            else if(c==0)
            {
                ll q=pow(2,a.size());
                 cout<<q<<endl;
            }






        }
        return 0;
    }




