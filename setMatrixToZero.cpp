#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size(),col=1;
        
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==0)
                col=0;
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]==0)
                    matrix[i][0]=matrix[0][j]=0;            
            }
        }
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=1;j--)
            {
                if(matrix[i][0]==0||matrix[0][j]==0)
                    matrix[i][j]=0;
            }
            if(col==0)
                matrix[i][0]=0;
        }
    }
};
int main() {
   test()
   {
       int n,m;
       cin>>n>>m;
       vector<vector<int>>v;
       for(int i=0;i<n;i++)
       {
           vector<int>temp;
           for(int j=0;j<m;j++)
           {
               ll x;
               cin>>x;
               temp.push_back(x);
           }
           v.push_back(temp);
       }
       Solution ob;
       ob.setZeroes(v);
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           cout<<v[i][j]<<" ";
           cout<<endl;
       }
   }
   return 0;
}