#include <bits/stdc++.h>
using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }
int knapSack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    else
        return max(
            val[n - 1]
                + knapSack(W - wt[n - 1], wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}
int main()
{

    int n;
    cin>>n;
    int profit[n];
    int weight[n];
    for(int i=0;i<n;i++)
        cin>>profit[i];
         for(int i=0;i<n;i++)
        cin>>weight[i];
  cout<<"enter weight"<<endl;
  int w;
  cin>>w;
    cout << knapSack(W, weight, profit, n);
    return 0;
}
