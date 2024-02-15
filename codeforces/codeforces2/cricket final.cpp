#include<bits/stdc++.h>
using namespace std;
class ball
{
public:
    int run;
    int over;
    int bal;
    int tw;
    int ex;
    int ttover;
     int tover;
        int w;

    ball()
    {
        run=0;
        over=0;
        bal=0;
        ex=0;
    }
    void details1()
    {
         int tover=ttover;
        int w=tw;

        string ball;
        while(bal <(tover*6))
        {
            if(w==0)
                break;
            else
            {
                cout<<"enter the static of the ball"<<endl;
                cin>>ball;
                if(ball=="wide")
                {
                    ex++;
                    run++;
                    wides();
                }
                else if(ball=="noball")
                {
                    ex++;
                    run++;
                    noballs();
                }
                else if(ball=="1")
                {
                    bal++;
                    run++;
                }
                else if(ball=="2")
                {
                    bal++;
                    run+=2;
                }
                else if(ball=="3")
                {
                    bal++;
                    run+=3;
                }

                else if(ball=="4")
                {
                    cout<<"its an awsome...... four\n\n"<<endl;
                    bal++;
                    run+=4;
                }
                else if(ball=="6")
                {
                    cout<<"its huge....... sixx\n\n"<<endl;
                    bal++;
                    run+=6;
                }
                else
                {
                    bal++;
                    w++;
                    cout<<"oops!!! its bad time for batting team,\n\n"<<endl;
                }
            }

        }



        }
     void output()
    {
        cout<<"\ntotal run="<<run<<"\n "<<"total extra run="<<ex<<" \n"<<"total wicket="<<w<<"\n"<<"total over="<<bal/6<<"."<<bal%6<<endl;
    }


    int wides()
    {
        int byrun;
        int t;
        cout<<"enter how many extra run has been taken:";


        cin>>byrun;
        run=run+byrun;
        ex=ex+byrun;


    }
    int noballs()
    {
        int exrun;
        cout<<"enter how many wxtra run has been taken:";
        cin>>exrun;
        ex=ex+exrun;
        run=exrun+run;
    }


};
class team:public ball
{
    string name;
public:
    team()
    {

    }
    void setname()
    {
        cin>>name;

    }
    void getname()
    {
        cout<<name;
    }
    void toss()
    {
        cout<<name<<" won the toss"<<endl;
    }
    void bat()
    {
        cout<<name<<" decide to bat first"<<endl;
    }
    void ball()
    {
        cout<<name<<" decideto ball frst"<<endl;
    }
    void tover_tw(int a,int b)
    {
        ttover=a;
        tw=b;
    }
    void del()
    {
        details1();
        output();
    }

};
int main()
{
    team f,s;
    int tover,totalw;
    cout<<"enter the name of the two team"<<endl;
    f.setname();
    s.setname();
    cout<<"the name of the first team is ";

    f.getname();
    cout<<"\nthe name of the second team is ";
    s.getname();
    cout<<"\nits time to toss..the captain of ";
    f.getname();cout<<" throw the coin"<<endl;
    if(rand()%2==0)
       {
            f.toss();
            if(rand()%2==0)
            {
                f.bat();
                s.getname();cout<<" is balling first"<<endl;
            }
            else
            {
                f.ball();
                s.getname();cout<<" is batting first"<<endl;

            }
       }
    else
        {
            s.toss();
            if(rand()%2==0)
            {
                s.bat();
                f.getname();cout<<" is balling first"<<endl;
            }
            else
                {
                    s.ball();
                f.getname();cout<<" is batting first"<<endl;
                }
        }
        cout<<"Enter the number of total wicket and over"<<endl;
        cin>>tover>>totalw;
        f.tover_tw(tover,totalw);
        f.del();
        cout<<"its time to batting another team"<<endl;
         f.tover_tw(tover,totalw);
        s.del();
    return 0;
}
