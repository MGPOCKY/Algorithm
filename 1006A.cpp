#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		if(ar[i]%2==0)
		ar[i]=ar[i]-1;
	}
	for(int i=0;i<n;i++){
		cout<<ar[i]<<' ';
	}
}
