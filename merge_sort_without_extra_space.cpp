#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)

class Solution
{
    public:
    void merge(int arr1[], int arr2[], int n, int m) 
    { 
            // code here 
        int i=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(arr1[i]>arr2[j])
            {
                swap(arr1[i],arr2[j]);
            }
                sort(arr2,arr2+m);
        }
    } 
    void print(int *a,int *b, int n, int m)
    {
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        for(int i=0;i<m;i++)
        cout<<b[i]<<" ";
    }
    void solve()
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin>>b[i];
        
        merge(a,b,n,m);
        
        print(a,b,n,m);
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