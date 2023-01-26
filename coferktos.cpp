#include <bits/stdc++.h>
using namespace std;
long long N=10000001;
vector<bool>primes(N,true);
void gen_seive(){
	primes[0]=primes[1]=false;
	for(int i=2;i<=sqrt(N);i++){
		if(primes[i]){
			for(int j=i*i;j<=N;j+=i)
			{
				primes[j]=false;
			}
		}
	}
}
int main()
{
	gen_seive();
	int l,r,q,count;
	cin>>q;
	while(q--){
		cin>>l>>r;
		count=0;
		for(int i=l;i<=r;i++)
		{
			if(primes[i]==1){
				cout<<i;
			}
		}
	//cout<<count<<endl;
	}

}