#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)

class Solution
{
    public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ans = new int[2];
        
        int mp[n+1];
        for(int i=1;i<=n;i++)
        mp[i]=0;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]==2)
            ans[0]=arr[i];
        }
        
        for(int i=1;i<=n;i++)
        if(mp[i]==0)
        {
            ans[1]=i;
            break;
        }
        return ans;
    }
    
    void solve()
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        auto ans=findTwoElement(a,n);
        
        cout<<ans[0]<<" "<<ans[1];
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