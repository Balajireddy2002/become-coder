#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,arr[50],j=0;
	cin>>num;
    /*for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			
			cout<<"not prime";
			break;
			
		}
	}
	cout<<"prime";*/
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			
			cout<<"not prime";
			break;
			
		}
	}
	cout<<"prime";
}
