#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)

class Solution
{
    public:
    
    void solve()
    {
        int n,j=0,sum=0,temp=INT_MIN,i;
	    cin>>n;
	  
	   for(i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        sum+=x;
	        if(sum>temp)
	        temp=sum;
	        if(sum<0)
	        sum=0;
	    }
	    cout<<temp<<endl;
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