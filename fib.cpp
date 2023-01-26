#include<bits/stdc++.h>
using namespace std;
int fabonicci(int n){
	if(n==0 or n==1){
		return n;
	}
	else return(fabonicci(n-1)+fabonicci(n-2));
	
}
int main()
{
	int n;
	cin>>n;
	int a=0,b=1;
	int c=a+b;
	/*cout<<a<<" "<<b<<" ";
	for(int i=3;i<=n;i++){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}*/
	int m=0;
	/*for(int i=0;i<n;i++){
		cout<<fabonicci(m);
		m++;
	}*/
	cout<<fabonicci(5);

}