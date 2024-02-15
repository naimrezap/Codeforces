
#include<bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int roll;
    float marks;
    string  grade;



};
int main()
{
    struct student stdt[5],t;
    for(int i=0;i<5;i++)
    {
        cout<<"enter the name of the student"<<i+1<<" ";
        cin>>stdt[i].name;
        cout<<"enter the roll of the student"<<i+1<<" ";
        cin>>stdt[i].roll;
        cout<<"enter the marks of the student"<<i+1<<" ";
        cin>>stdt[i].marks;
        cout<<"enter the grade of the student"<<i+1<<" ";
         cin>>stdt[i].grade;
         system("cls");
    }
    cout<<"Before sorting the condition of the students data is:  \n"<<endl;
    cout<<"Name\t"<<"Roll\t"<<"marks\t"<<"Grade\t"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<stdt[i].name<<"\t"<<stdt[i].roll<<"\t"<<stdt[i].marks<<"\t"<<stdt[i].grade<<endl;
    }
    cout<<"\nAfter sorting the condition of the students data is:  \n"<<endl;
     cout<<"Name\t"<<"Roll\t"<<"marks\t"<<"Grade\t"<<endl;
     for(int i=0;i<4;i++)
     {
         for(int j=i+1;j<5;j++)
         {
            if(stdt[i].marks<stdt[j].marks)
            {
                 t=stdt[i];
                stdt[i]=stdt[j];
                stdt[j]=t;
            }
         }
     }
    for(int i=0;i<5;i++)
    {
        cout<<stdt[i].name<<"\t"<<stdt[i].roll<<"\t"<<stdt[i].marks<<"\t"<<stdt[i].grade<<endl;
    }
}
