
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,p;
    vector<int>a;
    cout<<"Enter the integer type number(untill press Enter):"<<endl;
    for(int i=0;;i++)
    {
        cin>>n;
         a.push_back(n);
         if(getchar()=='\n')
            break;
    }
    cout<<"The array condition: "<<endl;
        for(auto it:a)cout<<it<<" ";cout<<endl<<endl;
    while(1)
    {

        char s;
    cout<<"\n\nMenu:\nPress D to delete any element of the array."<<endl;
    cout<<"Press I to delete any element of the array."<<endl;
    cout<<"Press any other character to exit"<<endl;
    cout<<"Press::";
    cin>>s;
    if(s=='D')
    {
        cout<<"Enter the position of the element which will be delete: ";
        cin>>p;
        for(int i=p-1;i<a.size()-1;i++)
        {
            a[i]=a[i+1];
        }
        a[a.size()-1]=0;
        system("cls");
        cout<<"after deleting,array condition"<<endl;
        for(int i=0;i<a.size();i++)
            cout<<a[i]<<" ";

    }
    else if(s=='I')
    {
        cout<<"Enter the number which will be inserted: ";
        int num;
        cin>>num;
         cout<<"Enter the position of the element where will be Insert: ";
        cin>>p;
        for(int i=a.size();i>p-1;i--)
        {
            a[i]=a[i-1];
        }
        a[p-1]=num;
         system("cls");
         cout<<"after inserting,array condition"<<endl;
        for(int i=0;i<=a.size();i++)
            cout<<a[i]<<" ";

    }
    else break;
    }

}
