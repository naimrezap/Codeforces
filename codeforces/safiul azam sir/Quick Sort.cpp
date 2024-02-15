#include<bits/stdc++.h>
using namespace std;
int pat(int a[],int l,int r){
    int p=a[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(a[j]<p){
            i++;swap(a[i],a[j]);
            }
}
    swap(a[i+1],a[r]);
    return i+1;
}
void quicksort(int a[],int l,int r){
    if(l<r){
        int p=pat(a,l,r);
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }
}
int main(){
    cout<<"enter the size of the array...";
    int n;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array...";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
