#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<queue>
using namespace std;
vector<vector<int>>weight;
vector<bool> used;
	vector<int> dist;
	vector<int> d;
	vector<int> mark;
	int f;
int n;

void BFS(int start){
queue<int> q;
q.push(start);
 d[start] = 0;
    mark[start] = 1;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int i=0;i<n;i++){
			if(weight[v][i]!=1000000){
				if(mark[i]!=1){
					d[i]=d[v]+1;
					mark[i]=1;
					q.push(i);
				}

			}

		}

	}
}
int main(){
	int st,fi;
	cin>>n>>st>>fi;
	weight.resize(n);
	used.resize(n);
	dist.resize(n);
	d.resize(n);
	mark.resize(n);
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
	BFS(0);
	for(int i=0;i<n;i++){
		cout<<d[i]<<endl;
	}

	cin>>f;
}

