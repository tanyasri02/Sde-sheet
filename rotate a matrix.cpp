#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)

class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            swap(a[i][j],a[j][i]);
        }
        for(int i=0;i<n;i++)
        {
            reverse(a[i].begin(),a[i].end());
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
};
int main() {
   test()
   {
      Solution ob;
      int n;
      cin>>n;
      
      vector<vector<int>>a;
      
      for(int i=0;i<n;i++)
      {
          vector<int>temp;
          for(int j=0;j<n;j++)
          {
              int x;
              cin>>x;
              temp.push_back(x);
          }
          a.push_back(temp);
      }
      
      ob.rotate(a);
      
      cout<<endl;
   }
   return 0;
}
