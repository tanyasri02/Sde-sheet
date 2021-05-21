#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)

class Solution
{
    public:
    void duplicates(int arr[], int n) {
        // code here
        
        set<int>s;
        int mp[n+1];
        
        for(int i=0;i<n;i++)
        mp[i]=0;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]==2)
            {
                s.insert(arr[i]);
            }
        }
        
        if(s.empty())
        {
            cout<<(-1);
            return;
        }
        
        set<int, greater<int> >::iterator itr;
        
        for (itr = s.begin(); itr != s.end(); itr++)
        cout<<(*itr)<<" ";
    
    }
    void solve()
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        duplicates(arr,n);
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
// time complexity of merge function is O(nlog(m));