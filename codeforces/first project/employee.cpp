 #include<iostream>
using namespace std;
class emly
{
    private:
    int basic,bus,food,home,total;
    public:
        void set_basic(int a)
        {
            basic=a;

        }
          void set_total()
          {
              bus=basic*10/100;
              food=basic*5/100;
              home=basic*10/100;
          }
          void get_total()
          {
              total=basic+bus+food+home;
              cout<<total;

          }


};
int main()
{
    emly naim;
    int naim_basic;
    cin>>naim_basic;
    naim.set_basic(naim_basic);
    naim.set_total();
    naim.get_total();




return 0;
}
