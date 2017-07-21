#include<iostream>
using namespace std;
int main(){
	long int n,k;
	long int a[10];

	char c;
cin>>n>>k;
for(int i=0;i<10;i++){
	a[i]=0;

}
for(int i=0;i<n;i++){
	cin>>c;
	a[int(c)-int('0')]++;
}
if (k==1){

	for(int i=0;i<10;i++){
	while (a[i]>0){
		a[i]--;
		cout<<i;
	}
	}
	}

if(k!=1){
int j=0;
int m=n;
int z=k;
n=n%k;
k=m/k;
if (n>0){
	k++;
}
else{
	n=z;
}
z=k;

while (k!=0){
	for(int i=1;i<10;i++){
	
if (n>a[i] ){
n=n-a[i];
a[i]=0;
}
else {
	j=i;
	a[i]=a[i]-n;
	
	break;
}

	}
	cout<<j;
	k--;
}
}
else{


}
cin>>k;
return 0;

}


