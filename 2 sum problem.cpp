#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here   
        vector<pair<int,int>>ans;
        
        map<int,int>mp2;
        
        for(int i=0;i<M;i++) mp2[B[i]]++;
        
        for(int i=0;i<N;i++)
        {
            if(mp2[X-A[i]]>=1)
            ans.push_back(make_pair(A[i],X-A[i]));
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main() {
   test()
   {
       int n,m,k;
       cin>>n>>m>>k;
       int a[n],b[n];
       
       for(int i=0;i<n;i++) cin>>a[i];
       for(int i=0;i<m;i++) cin>>b[i];
       
       Solution ob;
       vector<pair<int,int>>ans;
       ans=ob.allPairs(a,b,n,m,k);
       
       for(int i=0;i<ans.size();i++)
       {
           cout<<ans[i].first<<" "<<ans[i].second<<endl;
       }
   }
   return 0;
}