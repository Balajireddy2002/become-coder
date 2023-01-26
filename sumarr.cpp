#include<bits/stdc++.h>
using namespace std;
int sum=0;
int sum_array(int *arr,int n,int i){
    if(i>n)return sum;
    else
    {
        if(arr[i]%2==0)
       {
        sum+=arr[i];
        cout<<sum;
        //return sum_array(arr,n,i+1);
       }
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sum_array(arr,n-1,0);

}
