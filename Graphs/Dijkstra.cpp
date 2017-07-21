#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n,start,m,p,d,q;

vector<int> D,visited,k;//prime-звідки,mark=чи вже проходили

    vector<vector<int >> w;
vector<int> Di(int st){
    int mini=n+1;
    k.resize(n);
    k[st]=0;
    visited[st]=true;
    for(int i=0;i<n;i++){
         D[i]=w[st][i];
    }
     int index=0,u=0;
     for (int i=0;i<n;i++)
    {
        int mini=6000000;
        for (int j=0;j<n;j++){
            if(visited[j]==false){
           
         D[j]=min(D[j],D[i]+w[i][j]);
    
         if(D[j]<mini){
             mini=D[j];
             u=j;
         }
            }
        }
        visited[u]=true;
        k[u]=D[u];
        
}

return k;
}   
int main()
{
cin>>n>>m>>start;
D.resize(n);
start--;
visited.resize(n);
w.resize(n);
for(int i=0;i<n;i++){
    visited[i]=false;
    w[i].resize(n);
    for(int j=0;j<n;j++){
        w[i][j]=6000000;
    }
}
for(int i=0;i<m;i++){
   cin>>p>>d>>q;
   p--;
   d--;
   w[p][d]=q;
   w[d][p]=q;
}

k=Di(start);
for(int i=0;i<n;i++){
    cout<<k[i]<<" ";
}
}
