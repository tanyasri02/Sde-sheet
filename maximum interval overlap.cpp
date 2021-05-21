#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)

class Solution
{
    public:
    vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	   // Your code goes here
	   int map[200005] = {0};
       for (int i = 0; i < N; i++) {
           map[Entry[i]]++;
           map[Exit[i] + 1]--;
       }
       int guests = INT_MIN, time;
       for (int i = 1; i < 200005 ; i++) {
           map[i] += map[i - 1];
       }
       for (int i = 0 ; i < 200005; i++) {
           if (map[i] > guests) {
               time = i;
               guests = map[i];
           }
       }
    return {guests,time};
	}
    void solve()
    {
        int n;cin>>n;
        int arr[n],brr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        cin>>brr[i];
        
        vector<int>ans=findMaxGuests(arr,brr,n);
        
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    }
};
int main() {
   test()
   {
       Solution ob;
       ob.solve();
       cout<<endl;
   }
   return 0;
}
