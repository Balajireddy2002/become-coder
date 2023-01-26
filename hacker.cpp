#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    while(num2!=0){
        if(num2>=num1){//30  100   30   10  //10  30
            num2=num2%num1;   //10  //0
        }
        else
        {
            swap(num1,num2);
        }
    }
    cout<<num1;

}