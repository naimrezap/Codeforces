#include<iostream>
#include<stdio.h>
using namespace std;
int t1run=0,t2run=0;
class ball
{

    int run;
    int over;
    int bal;
    int w;
    int ex;
public:
    ball()
    {
        run=0;
        over=0;
        bal=0;
        w=0;
        ex=0;
    }
    void details1(int tover)
    {
        int i=0;
        string ball;
        while(bal <(tover*6))
        {
            if(w==5)
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
        int i=0;
        i++;
         if(i==1)
                t1run=run;
            else
                t2run=run;
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
 void result()
    {
        if(t1run>t2run)
            cout<<"\n\nteam 1 won the match by "<<t1run-t2run<<" run"<<endl;
        else if(t2run>t1run)
            cout<<"\n\nteam 2 won the match by "<<t2run-t1run<<" run"<<endl;
        else
            cout<<"\n\ the match tie "<<endl;
    }
int main()
{
    ball f[2];
    int tover;
    int totalw;
    cout<<"enter the number of total over and wicket";
     cin>>tover>>totalw;
     for(int i=0;i<2;i++)
     {
         if(i==0)
            cout<<"the name of the first team is team tiger...."<<endl;
          else
            cout<<"the name of the second team is team lion...."<<endl;
     }
    cout<<"now,its time to toss and decide your decition:"<<endl;
    for(int i=0; i<1; i++)
    {


        if(rand()%2==0)
        {
            cout<<"team tiger win the toss and decided to bat"<<endl;
            cout<<"\n enter total over to be played\n\n"<<endl;

            f[i].details1(tover);
            f[i].output();
        }
        else{
                cout<<"team lion win the toss and decide to bat"<<endl;
            f[i].details1(tover);
        f[i].output();
        }


    }
    cout<<"its time to bat the another team....."<<endl;

    cout<<"\n enter total over to be played\n\n"<<endl;
    cin>>tover;
    f[1].details1(tover);
    f[1].output();
  result();




    return 0;

}/*
#include<bits/stdc++.h>
using namespace std;
class team{
string name1,name2;
public:
    team(string s,string s1)
    {
        name1=s;
        name2=s1;
    }
    void setName()
    {
        cout<<"the name of first team" <<name1<<endl;
         cout<<"the name of second team "<<name2<<endl;

    }


    void team1()
    {
        cout<<name1<<" team won the toss"<<endl;

    }
    void team2()
   {
       cout<<name2<<" team won the toss"<<endl;
   }
};
int main()
{
   team nam("lion blusters","tiger eleven");
   nam.setName();
   int toss;
   for (int i=0;i<2;i++)
   {
       if(rand()%2==0)
       nam.team1();
       else nam.team2();
       break;
   }

}*/
