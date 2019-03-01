#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n,count=0;
	cin>>n;
	char ar[n];
	cin>>ar;
	for(int i=0;i<n;i++){
		if(i!=n-1){
			if(ar[i]=='B'&ar[i+1]=='W')
			count++;
		}
		else{
			if(ar[i-1]=='W'&ar[i]=='B'){
				count++;
			}
		}
	}
	cout<<count<<'\n';
	count=0;
	for(int i=0;i<n;i++){
		if(ar[i]=='B'&i!=n-1){
			count++;
		}
		else if(ar[i]=='B'&i==n-1){
			count++;
			cout<<count;
			count=0;
		}
		else{
			cout<<count;
			count=0;
		}
	}
}
