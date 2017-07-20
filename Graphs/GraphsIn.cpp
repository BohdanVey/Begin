
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int finish,start,n,f,h;

vector<int> prime,mark;//prime-звідки,mark=чи вже проходили
vector<vector<int>> edges;
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
}
