#include<iostream>

using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t>0)
  {
      string name;
  cin>>name;//cout<<sizeof(name);
  int l=name.length();
  if(l>10)
  {
      cout<<name[0]<<(l-2)<<name[l-1]<<endl;
  }
  else
    cout<<name<<endl;
      t--;
  }
    return 0;
}

