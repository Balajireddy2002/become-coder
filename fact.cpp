#include<bits/stdc++.h>
using namespace std;
int recursion(int n)
{
	/*int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;*/
	fact=1;
	if(n==0 or n==1)return 1;
	else
	return(n*recursion(n-1));
}
int main()
{
	int n;
	cin>>n;
	cout<<recursion(n);
}