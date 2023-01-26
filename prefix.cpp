#include <bits/stdc++.h>
using namespace std;
long long N=10000001;
vector<bool>primes(N,true);
vector<int>prefix(N,0);
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
	for(int i=0;i<=N;i++){
		prefix[i]=prefix[i-1]+primes[i];
	}

}
int main()
{
	gen_seive();
	int q;
	cin>>q;
	//auto it=prefix.at(q);
	vector<int>::iterator itr = prefix.begin()+q;
	cout<<*itr;
}