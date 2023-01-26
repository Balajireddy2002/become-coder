#include<bits/stdc++.h>
using namespace std;
int recsum(int n){
    if(n==0){
        return 0;
    }
    else
    return n%10+sum(n/10);
}
int sum(int n){
    int sum=0;
    while(true){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    cout<<sum(257);
}