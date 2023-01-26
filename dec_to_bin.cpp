#include<iostream>
using namespace std;
int main()
{
	int n,r;
	int arr[20];
	cin>>n;
	int i=0;
	while(n>0)
	{
		r=n%2;
		arr[i]=r;
		n=n>>1;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	cout<<arr[j];
}
