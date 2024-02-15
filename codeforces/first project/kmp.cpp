#include<bits/stdc++.h>
using namespace std;
int kmp(string s,vector<int>&lps)
{
    int i=1;
    int j=0;
    while(i<s.size())
    {
        if(s[i]==s[j])
        {
            j++;
            lps[i]=j;//abcabcaa
            i++;


        }
        else if(j==0)i++;
        else
        {
            j=lps[j-1];
        }
    }



}
int main()
{
    string s,d;
    cin>>s;
    cin>>d;
    vector<int>lps(s.size(),0);
    kmp(s,lps);
    for(int i=0;i<s.size();i++)
    {
        cout<<lps[i]<<" ";
    }
    cout<<endl;
   int  cout1=0,i=0,j=0;
    while(i<s.size())
    {
        if(s[i]==d[j])
        {
            i++;j++;
        }
        else if(j==0)i++;
        else{
            j=lps[j-1];

        }
        if(j==d.size())
        {
            cout1++;
            j=lps[j-1];
        }
    }
    cout<<cout1<<endl;




    return 0;
}
