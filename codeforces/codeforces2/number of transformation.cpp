#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        set<char>s;
        set<char>s1;
        s.insert(a.begin(),a.end());
        s.insert(b.begin(),b.end());
        s1.insert(s1.begin(),s1.end());
        if(s1.size()==1)
            cout<<1<<endl;
        else
        {
            bool ok=true,q=true;;
            for(int i=0; i<b.size(); i++)
            {
                if(b[i]=='a')
                {
                    ok=false;
                }
                if(b[i]!='a')
                {
                    q=false;
                }
            }
            if(q==false && ok==false)
            {
                cout<<-1<<endl;
            }
            else
                cout<<s.size()<<endl;



        }


    }
    return 0;
}
