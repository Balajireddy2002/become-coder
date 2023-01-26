#include<iostream>
using namespace std;
int main()
{
	string name;
	int year,per,backlogs;
	string branch;
	cout<<"name year per backlog  branch"<<endl;
	cin>>name>>year>>per>>backlogs>>branch;
	if(year==3 and backlogs==0 and (branch=="cse" or branch== "it" or branch=="ece" )and per>70)
    cout<<"ELIGIBLE";
	else
	cout<<"not eligible"<<endl;
}
	
