
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>nums(n);
        vector<int>v2;
        deque<int>dq;
        for(int i=0; i<n; i++)
        {
            cin>>nums[i];

        }
        for(int i=0;i<k;i++)
        {
            while(!dq.empty() && nums[dq.back()]<=nums[i])
                dq.pop_back();
            dq.push_back(i);
        }

         v2.push_back(nums[dq.front()]);
        for(int i=k;i<nums.size();i++)

        {
            while(!dq.empty() && dq.front()<=i-k)
            {
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<=nums[i])
                dq.pop_back();

            dq.push_back(i);

                v2.push_back(nums[dq.front()]);






        }

        for(int i=0; i<v2.size(); i++)
        {
            cout<<v2[i]<<" ";
        }

    }
    return 0;
}
