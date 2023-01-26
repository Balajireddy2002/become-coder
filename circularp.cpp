#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
	if(n<=0||n==1)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(){
	int n,np;
	cin>>n;
	int temp;
	int r,t,p;
	cout<<n<<endl;
	p=log10(n);
	bool status=true;
	np=p;
	if(isprime(n)){
		
		while(np){
			r=n%10;
			n=r*pow(10,p)+n/10;
			cout<<n<<endl;
			if(!isprime(n))status=false;
		}
		if(status=true)cout<<"true";
        else cout<<"false";
		
    }
    else
    	cout<<"not";
    
}
