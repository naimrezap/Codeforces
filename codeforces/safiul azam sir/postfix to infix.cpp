
#include<bits/stdc++.h>
using namespace std;
bool isoper(char t)
{
    if((t>='a' && t<='z') ||(t>='A' && t<='Z') )
    {
        return true;
    }
    else
        return false;
}
string postfixtoin(string postfix)
{
    stack<string>s;
    for(int i=0;i<postfix.length();i++)
    {
        if(isoper(postfix[i]))
        {
            string op(1,postfix[i]);
            s.push(op);
        }
        else
        {
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            s.push("("+op2+postfix[i]+op1+")");
        }
    }
    return s.top();
}
int main()
{
    string infix,postfix;
    cout<<"enter the postfix exp.."<<endl;
    cin>>postfix;
    cout<<"postfix exp.."<<postfix<<endl;
    infix=postfixtoin(postfix);
    cout<<"Infix exp.."<<infix<<endl;
    return 0;
}
