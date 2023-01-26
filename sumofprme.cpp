#include<iostream>
using namespace std;
bool prime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
	 if(n%i==0)
	 {
	 	return false;
	 }
	}
	return true;
}
int main()
{	int n,r,sum=0;
	cin>>n;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(prime(i))
			{
				sum=sum+i;
			}
			if(i!=n/i)
			{
				r=n/i;
				if(prime(r))
				sum=sum+i;
			}
		}
	}
	cout<<sum;
}
