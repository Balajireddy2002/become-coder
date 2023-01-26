//bin to oct
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string s;
	cout<<"enter string"<<endl;
	cin>>s;
	int r=s.size();
	int sum=0,base=1;
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]&1==1)
		{
			sum=sum+base;
		}
		base=base<<1;
	}
	cout<<sum;
	return 0;
}
