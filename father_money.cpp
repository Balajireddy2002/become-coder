#include<iostream>
using namespace std;
int main()
{
	int money;
	cout<<"enter money given by father"<<endl;
	cin>>money;
	if(money>1000)
	{
		cout<<"BUNK"<<endl<<"PARTY"<<endl<<"MOVIE"<<endl;
	}
	else if(money>=500 and money<=1000)
	{
		cout<<"BUNK"<<endl<<"PARTY"<<endl;
	}
	else if(money>=100 and money<500){
		cout<<"PARTY"<<endl;
	}
	else
	{
		cout<<"cLASS"<<endl;
	}
}
