#include<iostream>
#include<ctime>
using namespace std;

class Human{
	int bd,bm,by;

	int get_day(){
		int x;
		time_t t = time(NULL);
		tm* ct = gmtime(&t);
		int cd = ct->tm_mday;

		if(cd < bd){
			x = 30 + cd - bd;
			bm += 1;
		}
		else x = cd - bd;

		return x;
	}
	int get_month(){
		time_t t = time(NULL);
		tm* ct = gmtime(&t);

		int cm = ct->tm_mon + 1;

		int y;

		if(cm<bm){
			y = 12 + cm - bm;
			bm += 1;
		}
		else y = cm - bm;

		return y;

	}

	int get_year(){
		time_t t = time(NULL);
		tm* ct = gmtime(&t);

		int cy = ct->tm_year + 1900;
		int z;
		z = cy - by;
		return z;
	}
public:

	Human(int d, int m, int y){
		bd = d;
		bm = m;
		by = y;
	}
	void age(){
		cout<<"Age\n"<<"\nDay: "<<get_day(	)<<"\nMonth: "<<get_month()<<"\nYear: "<<get_year()<<endl;
	}


};

int main(){

	int d,m,y;
	cout<<"Day_MOnth_Year: ";
	cin>>d>>m>>y;


	Human nihal(d,m,y);    //constrauctor

	nihal.age();

	return 0;
}
