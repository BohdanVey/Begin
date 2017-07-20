#include <iostream>
#include <string>
#include <vector>
using namespace std;
int finish,start,n,f,h;

vector<int> prime,mark;//prime-звідки,mark=чи вже проходили
vector<vector<int>> edges;
int DFS(int v,int from){
 if(mark[v]==1){
  return 0;   
 }
    mark[v]=1;
    prime[v]=from;
    if(v==finish){
     cout<<"K";
     return 0;   
    }
    for(int i=0;i<edges[v].size();i++){
     DFS(edges[v][i],v);   
    }
}
int main()
{
cin>>n>>start>>finish;
prime.resize(n);
mark.resize(n);
edges.resize(n);
start--;
finish--;
for(int i=0;i<n-1;i++){
    cin>>f>>h;
    f--;
    h--;
    edges[f].push_back(h);
    edges[h].push_back(f);
}

DFS(start,0);
}
