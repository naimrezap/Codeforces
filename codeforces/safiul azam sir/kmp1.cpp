 /*My KMP and lps  base own programming code in c++;
I think anyone can easily understand the code  if he study c++ in his past student life and khnow the all syntex of this programing language
*/
#include<bits/stdc++.h>
using namespace std;
//the function for calculate the actual position of lps
void makelps(string str,vector<int>&lps)
{
    int i=1;
    int j=0;
    while(i<str.size())
    {
        if(str[i]==str[j])
        {
           j++;
            lps[i]=j;
             i++;

        }
        else if(j==0)i++;
        else{

            j=lps[j-1];
        }
    }
}
int main()
{
    string str,pattern;
    cin>>str>>pattern;
    vector<int>lps(str.size(),0);
    makelps(str,lps);
    for(int i=0;i<str.size();i++)
        cout<<lps[i]<<" ";

        int i=0,j=0,count1=0;
        //this part for calculating the kmp
        //calculate the number of the given substing in the string pattttern
        while(i<str.size())
        {
            if(str[i]==pattern[j])
            {
                j++;
                i++;
            }
            else if(j==0)i++;
            else{
                j=lps[j-1];
            }
            if(j==pattern.size())
            {
                count1++;
                    j=lps[j-1];
            }
        }
        cout<<endl
        //output ofthe numbr of substring of the given string
        cout<<count1<<endl;
    return 0;
}
