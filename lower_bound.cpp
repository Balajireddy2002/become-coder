#include<bits/stdc++.h>
using namespace std;
int Drinker(int a[],int t,int n){
	int l=0;
	int r=n-1;
	while(l<=r)
	{
		int mid=(l+r)>>1;
		if(a[mid]>=t)//if(a[mid]<=t)
			           //l=mid+1;
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;//r=mid-1
		}
	}
	return l;
}
int main()
{
	int arr[8]={1,2,3,4,4,4,5,6};
	int pos=Drinker(arr,4,8);
	cout<<pos;
}