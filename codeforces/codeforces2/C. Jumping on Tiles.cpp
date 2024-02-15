    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        ll t;
        cin>>t;
        while(t--)
        {
           string s;
           cin>>s;
           string s2=s;
           int n=s.length();
           int p=0;
           vector<int>v;
           if(s[0]>s[n-1])
           {
               sort(s2.begin(),s2.end());
               int i=n-1;
                while(s2[i]!=s[0])
                    i--;;
               for(;i>0;i--)
               {

                   p+=s2[i]-s2[i-1];
               }

           }
           cout<<p<<endl;





        }
        return 0;
    }





