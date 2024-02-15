#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,n,a;
    cin>>n;
    int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;

    for(i=1; i<n; i++)
    {

    a=i;

        if(i<9)
        {

            if(a==1)
        one=one+1;
    else if(a==2)
        two=two+1;
    else if(a==2)
        two=two+1;
    else if(a==2)
        three=three+1;
    else if(a==2)
        four=four+1;
    else if(a==2)
        five=five+1;
    else if(a==2)
        six=six+1;
    else if(a==2)
        seven=seven+1;
    else if(a==2)
        eight=eight+1;
    else if(a==2)
        nine=nine+1;
    else
        zero=zero+1;

        }
        else{
            i=i%10;
            if(a==1)
        one=one+1;
    else if(a==2)
        two=two+1;
    else if(a==2)
        two=two+1;
    else if(a==2)
        three=three+1;
    else if(a==2)
        four=four+1;
    else if(a==2)
        five=five+1;
    else if(a==2)
        six=six+1;
    else if(a==2)
        seven=seven+1;
    else if(a==2)
        eight=eight+1;
    else if(a==2)
        nine=nine+1;
    else
        zero=zero+1;
            i=i/10;
           if(a==1)
        one=one+1;
    else if(a==2)
        two=two+1;
    else if(a==2)
        two=two+1;
    else if(a==2)
        three=three+1;
    else if(a==2)
        four=four+1;
    else if(a==2)
        five=five+1;
    else if(a==2)
        six=six+1;
    else if(a==2)
        seven=seven+1;
    else if(a==2)
        eight=eight+1;
    else if(a==2)
        nine=nine+1;
    else
        zero=zero+1;
        }





    }
    cout<<zero<<" "<<one<<" "<<two<<" "<<three<<" "<<four<<" "<<five<<" "<<six<<" "<<seven<<" "<<eight<<" "<<nine<<endl;



    return 0;
}
