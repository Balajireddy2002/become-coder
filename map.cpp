#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int>mp;
	int arr[8]={1,3,4,5,6,7,6,4};
	for(int i=0;i<8;i++)
	{
		mp[arr[i]]++;
	}
	for(auto it:mp)
		cout<<it.first<<" "<<it.second<<"\n";
	

}