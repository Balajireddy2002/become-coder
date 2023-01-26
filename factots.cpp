#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,arr[50],j=0;
	cin>>num;
	/*for(int i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			
			cout<<i<<"\n";
			
		}
	}
	cout<<num<<endl;*/
	int factors=0;
	for(int i=1;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			
			cout<<i<<"\n";
		    factors+=1;
			if(num/i!=i)
			{
				cout<<num/i<<endl;
				factors+=1;
			}
			
	    }
	}
	    cout<<num<<"has"<<factors<<"factors"<<endl;	
		if(factors==2)
		cout<<num<<"is a prime number"<<endl;
		else
		cout<<num<<"not prime"<<endl;
	
}
