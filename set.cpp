#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;//set creation
    st.insert(10);//{10}
    st.insert(20);//{10,20}
    st.insert(10);//{10,20} set will not allow dupliactes
    for(auto it:st)
    cout<<it<<" ";
    cout<<endl;
    auto it=st.find(30);// if 30 exist in the set then it will be printed
    cout<<*it<<endl;;
    st.insert(30);
    st.insert(40);
    st.emplace(50);//emplace is used  to insert
    for(auto it2:st)
    cout<<it2<<" ";
    cout<<endl;
    auto it1=st.find(60);//ans will be 5
    cout<<*it1<<endl;
    st.erase(it1);//deleting the element pointing bt it1
    st.insert(60);
    for(auto ita:st)
    cout<<ita<<" ";
    cout<<endl;
    auto it3=st.find(30);
    auto it4=st.find(50);
    st.erase(it3,it4);//exclusive it4;
    for(auto ita:st)
    cout<<ita<<" ";
    cout<<endl;
}
