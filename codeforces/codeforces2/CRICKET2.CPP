#include<bits/stdc++.h>
#define nl cout<<endl<<endl
using namespace std;
int runs=0,extras=0,wickets=0,overs=0,n=0,r=0,nW;
int total_run=0,wic=0,TOTAL_RUN=0,WIC=0;
class player
{
public:
    char playerName[20];
    int runs,extras,wickets,overs,n,r,nW;
    player()
    {
        runs=0,extras=0,wickets=0,overs=0,n=0,r=0,nW;
    }

    void setName()
    {
        cin>>playerName;
    }
    void getName()
    {
        cout<<playerName<<endl;
    }
    void over(int t)
    {
        n=t;
    }
    void run()
    {
        for(int i=1; i<=6; i++)
        {
            cout<<"Runs of "<<" over "<<i<<" ball(for wickets -15,extras -1 to -5,no ball -6 to-12,for wide 7 to 11):";
            cin>>r;
            if(r==-15)
            {
                nl;
                cout<<"                  Wicket! Wicket! Wicket!!"<<endl;
                wickets++;
                if(wickets==nW)break;
                nl;
            }
            else if(r==7)
            {
                nl;
                cout<<"                           WIDE!        ";
                runs+=(r-6);
                i--;
                nl;
            }
            else if (r<=-6 && r>=-12)
            {
                nl;
                cout<<"                     No Ball .. Free Hit!!"<<endl;
                runs++;
                runs=runs + abs(r)-6;
                extras++;
                i--;
                nl;
            }
            else if(r==6)
            {
                nl;
                cout<<"                            SIX! SIX! SIX!"<<endl;
                runs+=r;
                nl;
            }
            else if (r==4)
            {
                nl;
                cout<<"                                    FOUR!!"<<endl;
                runs+=r;
                nl;
            }
            else if (r<=-1 && r>=-5)
            {
                runs+=abs(r);
                extras+=abs(r);
            }
            else if(r>0 && r<4)
            {
                runs+=r;
            }
        }
        cout<<"End of "<<" over: "<<endl<<"Runs   :"<<runs<<endl<<"Extra  :"<<extras<<endl<<"Wicket :"<<wickets;
        nl;
    }

    int getrun()
    {
        return runs;
    }
    void getRun()
    {
        cout<<"Total runs   :"<< runs <<endl;
        cout<<"extra runs   :"<< extras <<endl;
        cout<<"Wickets      :"<< wickets<<endl;

    }
};
class team:public player
{
public:
    player p[11];
    char teamname[20];
    void setteamname()
    {
        cin>>teamname;
    }
    void getteamname()
    {
        cout<<teamname<<endl;;
    }
};
int main()
{
    team t1,t2;
    cout<<"Enter Team Names:";
    t1.setteamname();
    t2.setteamname();
    cout<<"Team names are:"<<endl;
    t1.getteamname();
    t2.getteamname();
    int ply;
    cout<<"Number of player: ";
    cin>>ply;

    cout<<"Enter Team-1 Players: "<<endl;
    for(int j=0; j<ply; j++)
    {
        t1.p[j].setName();
    }
    nl;
    cout<<"Enter Team-2 Players: "<<endl;
    for(int j=0; j<ply; j++)
    {
        t2.p[j].setName();
    }
    nl;
    cout<<"Team-1 Players: "<<endl;
    for(int j=0; j<ply; j++)
    {
        t1.p[j].getName();
    }
    nl;
    cout<<"Team-2 Players: "<<endl;
    for(int j=0; j<ply; j++)
    {
        t2.p[j].getName();
    }
    nl;
    cout<<"Waiting for Toss!!"<<"\n";
    if(rand()%2==0)cout<<"Team-1 win the toss and elected to bat first.";
    else cout<<"Team-1 win the toss and elected to bat first.";
    nl;
    int t;
    cout<<"Number of overs:";
    cin>>t;
    nl;
    t1.p[0].wickets(ply);
    t1.p[0].over(t);
    t1.p[0].run();
    cout<<"Short scoreboard for Team-1:"<<endl;
    t1.p[0].getRun();

    nl;
    t2.p[0].wicket(ply);
    t2.p[0].over(t);
    t2.p[0].run();
    cout<<"Short scoreboard for Team-1:"<<endl;
    t2.p[0].getRun();
    nl;
    if(t1.p[0].getrun()>t2.p[0].getrun())
    {
        t1.getteamname();
        cout<<" won by "<<t1.p[0].getrun()- t2.p[0].getrun()<<" runs.";
        nl;
    }
    else  if(t1.p[0].getrun()<t2.p[0].getrun())
    {
        t2.getteamname();
        cout<<" won by "<<t2.p[0].getrun()- t1.p[0].getrun()<<" runs.";
        nl;
    }
    else cout<<" DRAW";
    nl;
    return 0;
}

