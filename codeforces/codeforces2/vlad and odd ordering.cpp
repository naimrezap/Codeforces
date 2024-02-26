#include<bits/stdc++.h>
using namespace std;
#define ll long long


void line(){
	cout<<"|---------------------------|\n";
}

void solution()
{
	
	
	string s;
	int day,mon,y;
	scanf("%d/%d/%d",&day,&mon,&y);
	cin>>s;
	int totald=0,val;
	string a[7]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	//cout<<day<<endl<<mon<<endl<<y<<endl;
	for(int i=0;i<7;i++)
	{
		if(a[i]==s)
		{
			val=i+1;
			break;
		}
		
	}
	//cout<<val<<" "<<s<<endl;
	if(mon==4 || mon==6 || mon==9 || mon==11) totald=30;
	else if(mon==2)
	{
		if((y%4==0 and y%100!=0) || (y%400==0))
		totald=29;
		else
		totald=28;
	}
	else totald=31;
	
	int st=(val+7)-(day%7);
	st%=7;
	//cout<<st<<endl;
	vector<int>v[5];
	bool fg=true;
	int it=1;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		{
			
			if(it>totald){
				v[i].push_back(0);
				it++;
			}
			else if(j<st and fg)
			{
				v[i].push_back(0);
				
			}
			else
			{
				fg=false;
				v[i].push_back(it);
				it++;
			}
			
			
		}
		
	}
	int k=0;
	while(it<=totald)
	{
		v[0][k++]=it++;
		
	}

	line();
	
	cout<<"|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
	line();
	
		
	for(int i=0;i<5;i++)
	{	
		cout<<"|";
		for(int j=0;j<7;j++)
		{
			if(v[i][j]==0)cout<<" - |";
			else if(v[i][j]<10){
				cout<<"  "<<v[i][j]<<"|";
			}
			else
			 cout<<" "<<v[i][j]<<"|";
			
		}
		
		cout<<endl;
	}
	line();
	cout<<endl;
	
	
	
	
	
		
		
	
	
	
	
}
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		solution();
	}
	return 0;
}