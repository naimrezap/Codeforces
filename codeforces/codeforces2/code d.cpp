    #include<bits/stdc++.h>
    using namespace std;

    int r(int n)
    {

        int count = 0;
        int x,y,z;
        for (z=1; z<=n;z++)
        {
            for (y=1; y<=z; y++)
            {
                for ( x= 1; x<=y;x++)
                {

                    vector<int>vec(3);
                    vec[0]=x;
                    vec[1]=y;
                    vec[2]=z;
                    sort(vec.begin(),vec.end());

                    if ((vec[0]+vec[1] >= vec[2]) && (x+y+z)==n )
                    {

                        count++;
                    }
                }
            }
        }

        return count;
    }

    int main()
    {

        int n,t;
        cin>>t;
        while(t--)
        {
            cin>>n;
            cout << r(n)<<endl;
        }

        return 0;
    }




