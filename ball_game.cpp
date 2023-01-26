#include<iostream>
using namespace std;
int main()
{
	int a_count=0,b_count=0,n,i,arr[50];
	cout<<"enter no of balls"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		arr[i]=(i+1);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]&1)
		{
			a_count+=1;
		}
		else
		{
			b_count+=1;
		}
	}
	cout<<"a has "<<a_count<<endl;
	cout<<"b has"<<b_count<<endl;
	if(a_count>b_count)
	cout<<"a won"<<endl;
	else if(a_count==b_count)
	cout<<"drop"<<endl;
	else
	cout<<"b won"<<endl;
	
}
