#include<iostream>
using namespace std;
class ball{
 int ones,tow,three,four,six;
 int run,wicket;
 public:
     ball(int a, int b)
     {
         run=a;
         wicket=b;
     }
     void one(int x)
     {
         run+=1;
     }
      void two(int x)
     {
         run+=2;
     }
      void three(int x)
     {
         run+=3;
     }
      void four(int x)
     {
         run+=4;
     }
      void six(int x)
     {
         run+=6;
     }
      void wide(int x)
     {
         run+=1;
     }
      void noball(int x)
     {
         run+=1;
     }
};
int main()
{
    ball s1(0,5);
    int a1,a2,a3,a4,a6,aw,an;
    int


    return 0;
}
  string ball;
    int run=0,ballno=6,over,w=3;
    cin>>over;
    while(over>0)
    {


            while(ballno>0)
            {
                 if(w>0)
        {
                cin>>ball;
                if(ball=="noball")
                {
                    run++;
                    continue;
                }
                else if(ball=="wide")
                {
                    run++;
                    continue;
                }
                else if(ball=="1")
                {
                    run++;
                }
                else if(ball=="2")
                    run+=2;
                else if(ball=="3")
                {
                    run+=3;
                }
                else if(ball=="4")
                {
                    run+=4;
                }
                else if(ball=="6")
                {
                    run+=6;
                }
                else if(ball=="wicket")
                {
                    w++;
                }
                ballno--;
            }
        }
            over--;
            ballno=6;

    }
    cout<<run<<" "<<w<<endl;
