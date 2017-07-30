#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include <stdio.h>

using namespace std;
const int base = 1000*1000*1000;
vector<int> a,b;
char s[10000];
vector<int> in(vector<int> a){
	cin>>s;
for(int i=strlen(s);i>0;i-=9){
	s[i]=0;
	a.push_back(atoi(i>=9 ? s+i-9 : s));
}
return a;
}
void out(vector<int> a){
	printf ("%09d", a.empty() ? 0 : a.back());
for (int i=(int)a.size()-1; i>=0; --i)
	printf ("%09d", a[i]);
	}

int main(){
a=in(a);
out(a);
cin>>s[0];
}
