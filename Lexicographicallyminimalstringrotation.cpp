
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int lcs(string S){
    S += S;
    vector<int> f(S.length(),-1);     
    int k =0;
    for(int j=1;j<S.length();j++){
        int sj = S[j];
        int i = f[j-k-1];
        while (i != -1 and sj != S[k+i+1]){
            if (sj < S[k+i+1]) k = j-i-1;
            i = f[i];
        }
        if (sj != S[k+i+1]){
            if (sj < S[k]) k = j;
            f[j-k] = -1;
        }
        else f[j-k] = i+1;
    }
    return k;
}
int main()
{
 string s;
 cin>>s;
 int k=lcs(s);
 int n=s.length();
 for(int i=0;i<n;i++){
  cout<<s[(i+k)%n];   
 }
}
