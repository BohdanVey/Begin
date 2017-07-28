#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
vector<vector<int>>weight;
vector<bool> used;
	vector<int> dist;
	int f;
int n;
vector<int>Dijkstra(int start){
	
	
	for(int i=0;i<n;i++){
		dist[i]=weight[start][i];
	}
	for(int i=0;i<n;i++){
used[i]=false;
	}
	used[start]=true;
	int mini=1000001;
	int ind=start;
	int u=start;
	for(int i=0;i<n;i++){
		mini=1000000;
			for(int j=0;j<n;j++){
				if(used[j]==false){
					
					if(dist[j]>dist[ind]+weight[ind][j]){
						dist[j]=dist[ind]+weight[ind][j];
						
						}
					if(mini>dist[j]){
							mini=dist[j];
							 u=j;
					}
				}
			}
			ind=u;
			used[u]=true;
	}
	return dist;
}
int main(){
	int st,fi;
	cin>>n>>st>>fi;
	weight.resize(n);
	used.resize(n);
	dist.resize(n);
	for(int i=0;i<n;i++){
		weight[i].resize(n);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>f;
			weight[i][j]=f;
			if(f==-1){
				weight[i][j]=1000000;
			}
		}
	}
	
	st--;
	fi--;
	dist=Dijkstra(st);
	if(dist[fi]==1000000){
		cout<<"-1";
	}
	else{
	cout<<dist[fi];
	}
	cin>>f;
}

