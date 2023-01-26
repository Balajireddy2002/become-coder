#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>adj[n+1];
	int u,v;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	for(int j=0;j<n;j++){
		for(auto x:adj[j]){
			cout<<x<<" ";
		}
		cout<<"\n";
	}
}