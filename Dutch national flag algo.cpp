
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)

class Solution
{
    public:
    void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    }
    void sort012(int a[], int n)
    {
    int high=n-1,low=0,mid=0;
    
    while(high>=mid)
    {
        if(a[mid]==0)
        swap(&a[mid++],&a[low++]);
        else if(a[mid]==1)
        mid++;
        else
        swap(&a[mid],&a[high--]);
    }
    }  
    void print(int *a,int n)
    {
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    }
    void solve()
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        sort012(a,n);
        
        print(a,n);
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
