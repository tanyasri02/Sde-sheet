#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)

class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int N) {
        // code here
        vector<ll>ans;
        ans.push_back(1);
        ll m=1000000007;
        
        if(N==1)
        return ans;
        
        vector<ll>prev=nthRowOfPascalTriangle(N-1);
        
        for(ll i=1;i<N-1;i++)
        {
            ll input=(prev[i]+prev[i-1])%m;
            ans.push_back(input);
        }
        
        ans.push_back(1);
        return ans;
        
    }
};


int main() {
   test()
   {
      Solution ob;
      ll n;
      cin>>n;
      
      vector<ll>ans;
      ans=ob.nthRowOfPascalTriangle(n);
      
      for(ll i=0;i<ans.size();i++)
      cout<<ans[i]<<" ";
      
      cout<<endl;
   }
   return 0;
}