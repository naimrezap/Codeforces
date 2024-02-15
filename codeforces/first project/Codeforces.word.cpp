#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        x++;
        else
            x--;


    }
    if(x>0)
    {transform(s.begin(),s.end(),s.begin(), ::toupper);
       cout<<s <<endl;}
    else
    {transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;}
    return 0;

}
