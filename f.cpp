#include<iostream>
using namespace std;
int main(){
	int n,m,a[100][100];
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
	cout<<a[n][m];
	cin>>n;
}

