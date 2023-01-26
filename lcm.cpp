#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int num1,num2;
	cin>>num1>>num2;
	if(num2>num1)swap(num1,num2);
	for(int i=num2;i>0;i++){
		if(i%num1 ==0 and i%num2==0){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}