#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int booth(int a,int n){
	if(n==0){
		return 1;
	}
	else if(n%2==1){
		return booth(a,n-1)*a;
	}
	else{
		return booth(a,n/2)*booth(a,n/2);
	}
}

int main(){
int a,n;
cin>>a>>n;

cout<<booth(a,n);
cin>>a;
}
