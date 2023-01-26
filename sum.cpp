#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    	for(int j=i;j<k+i;k++){
    		cout<<arr[j]<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}