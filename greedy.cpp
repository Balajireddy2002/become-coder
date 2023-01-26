#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]);
	}
	return true;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<check(arr,n);
	return 0;
}