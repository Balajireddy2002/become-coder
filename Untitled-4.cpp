#include<bits/stdc++.h>
using namespace std;
/*int recsum(int n){
    if(n==0){
        return 0;
    }
    else
    return n%10+recsum(n/10);
}*/
int sumfun(int n){ 
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    cout<<sumfun(257);
}