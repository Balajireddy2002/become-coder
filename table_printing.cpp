#include<iostream>
using namespace std;
int main()
{
	int table,limit,i=1;
	cin>>table>>limit;
	/*for(i=1;i<=limit;i++)
	{
		cout<<table<<"x"<<i<<"="<<table*i<<endl;
	}*/
	while(i<=limit)
	{
		cout<<table<<"x"<<i<<"="<<table*i<<endl;
		i+=2;
	}
}
