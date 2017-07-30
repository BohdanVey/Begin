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
vector<int> minu(vector<int> a,vector<int> b){
	int carry=0;
	for(int i=0;i<b.size() || carry;i++){
		a[i] -= carry + (i < b.size() ? b[i] : 0);
	carry = a[i] < 0;
	if (carry)  a[i] += base;
	}
	while (a.size() > 1 && a.back() == 0)
	a.pop_back();
	return a;
}
vector<int> add(vector<int> a,vector<int> b){
	int carry=0;
	for(int i=0;i<max(a.size(),b.size()) || carry;i++){
		if(i==a.size()){
			a.push_back(0);
		}
		a[i]+=carry+ (i<b.size() ? b[i]:0);
		carry=a[i]>=base;
		if(carry) a[i]-=base;
	}
	return a;
}
void out(vector<int> a){
	printf ("%d", a.empty() ? 0 : a.back());
for (int i=(int)a.size()-2; i>=0; --i)
	printf ("%09d", a[i]);
	}

int main(){
a=in(a);
out(a);
b=in(b);
out(b);
a=add(a,b);
out(a);
b=minu(a,b);
cout<<endl;

out(b);
cin>>s[0];
}
