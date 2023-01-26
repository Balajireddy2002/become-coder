#include<iostream>
using namespace std;
int main()
{
    bool s;
    float res;
    cout<<"sde -30000/-"<<endl;
    cin>>s;
    if (s==true)
    {
        cout<<"student is in become coder"<<endl;
        cout<<"5 % discount applied"<<endl;
        res=(5/30000)*100;
        cout<<"student has to pay rs."<<res<<"only"<<endl;
    }
    else
    {
        cout<<"studetnt has to pay"<<"30000/-"<<endl;
    }
}
