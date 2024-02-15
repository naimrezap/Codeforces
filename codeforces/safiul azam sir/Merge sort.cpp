 #include<bits/stdc++.h>
using namespace std;
vector<int>a1;
merge(int a[],int l,int mid,int r){
    int n1=l;
    int n2=mid+1;

    int k=l;
    while(n1<mid && n2<r){
        if(a[n2]<a[n1]){
            a1.push_back(a[n2]);
            n2++;k++;
        }
        else {
            a1.push_back(a[n1]);
            n1++;k++;
        }
    }
    while(n1<mid){
       a1.push_back(a[n1]);
        k++;n1++;
    }
    while(n2<r){
        a1.push_back(a[n2]);
        k++;n2++;
    }
}
void mergesort(int a[],int l,int r){
    if(l<r){
    int mid=(l+r)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
   merge(a,l,mid,r);
    }
}
int main(){
    cout<<"enter the size of array..";
    int n;
    cin>>n;
    int a[n];
    cout<<"\nenter the element of the array...";
    for(int i=0;i<n;i++ ){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a1[i]<<" ";
    }
    return 0;
}
