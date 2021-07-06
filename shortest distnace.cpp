#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,m;
	cin>>n>>m;
	
	vector<int>adj[n+1];
	
	for(int i=0;i<m;i++)
	{
	    int u,v;
	    cin>>u>>v;
	    
	    adj[u].push_back(v);
	    adj[v].push_back(u);
	}
	
	queue<int>q;
	int distance[n];
	
	for(int i=0;i<n;i++)
	distance[i]=INT_MAX;
	
	int src=0;
	distance[src]=0;
	q.push(distance[src]);
	
	while(q.empty()==false)
	{
	    int node=q.front();
	    q.pop();
	    
	    for(auto it:adj[node])
	    {
	        if(distance[node] + 1 < distance[it]){
		        distance[it]=distance[node]+1;
		        q.push(it);
	        }
	    }
	    
	}
	int i;
	for(i=0;i<n;i++)
	cout<<distance[i]<<" ";
	
	cout<<endl;
	return 0;
}
