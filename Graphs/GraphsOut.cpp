// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int finish,start,n,f,h;

vector<int> prime,mark,ans;//prime-звідки,mark=чи вже проходили
vector<vector<int>> edges;
vector<int> get_path()
{
    vector<int> g;
     g.push_back(finish);  
    for(int i=finish;i!=start;i=prime[i]){
     g.push_back(prime[i]);   
    }
   
    reverse(g.begin(),g.end());
    return g;
}
int DFS(int v,int from){
 if(mark[v]==1){
  return 0;   
 }
    mark[v]=1;
    prime[v]=from;
    if(v==finish){
    ans=get_path();
     
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
for(int i=0;i<ans.size();i++){
 cout<<ans[i]++;   
}
}
