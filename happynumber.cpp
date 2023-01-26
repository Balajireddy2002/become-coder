#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//const
	int num,q,l,r,x;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int prefix[num+1]={0};
	cin>>q;
	while(q--){
		cin>>l>>r>>x;
		prefix[l]+=x;
		prefix[r+1]-=x;
	}
	for(int i=1;i<num;i++){
		prefix[i]=prefix[i]+prefix[i-1];
	}
	for(int i=0;i<=num;i++){
		cout<<prefix[i]<<" ";
	}
	for(int i=0,j=0;i<num and j<=num;i++,j++){
		prefix[i]=prefix[i]+arr[i];
	}
	cout<<endl;
	for(int i=0;i<num;i++){
	cout<<prefix[i]<<" ";
	}
}