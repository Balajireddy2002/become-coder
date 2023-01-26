#include<iostream>
using namespace std;
int main()
{
	int n,pos;
	cin>>n;
	cin>>pos;
	n=n>>(pos-1);
	if(n&1==1)
	cout<<"yes";
	else
	cout<<"noo";
}
	
