#include<iostream>
using namespace std;
int main(){
	int n,m,a[101][101],b[200];
	cin>>n>>m;
	for(int i=0;i<100;i++){
		for (int j=0;j<100;j++){
			a[i][j]=0;
		}
	}
		for(int i=1;i<n+1;i++){
		for (int j=1;j<m+1;j++){
			cin>>a[i][j];
		}

	}
	for(int i=1;i<n+1;i++){
		for (int j=1;j<m+1;j++){
			if (a[i-1][j]>a[i][j-1]){
				a[i][j]+=a[i-1][j];
			}
			else{
				a[i][j]+=a[i][j-1];
			}
		}
	}
	int k=n+m-3;
	int i=n;
	int j=m;
	while(n!=1 || m!=1){
		if(a[n][m-1]>a[n-1][m]){
			b[k]=1;
			m-=1;
		}
		else{
			b[k]=0;
			n-=1;
		}
		
		k--;
	}
	
	k=i+j-3;
	for(int i=0;i<=k;i++){
		if(b[i]==1){
			cout<<'R';
		}
		else{
			cout<<'F';
		}
	}
	
	cin>>n;
	
}

