#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

int n;
while(scanf("%d",&n)!=EOF){
//cin>>n;
int arry[n],s=0;
for(int i=0;i<n;i++)
{
    cin>>arry[i];
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-1;j++)
    {

        if(arry[j]>arry[j+1]){
            s++;
        int t=arry[j];
        arry[j]=arry[j+1];
        arry[j+1]=t;}
    }
}

cout<<"Minimum exchange operations : "<<s<<endl;
}
return 0;
}
