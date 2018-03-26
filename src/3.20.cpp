#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using namespace::std;
int main(void)
{
    vector<int> v1;
    int i;
    while(cin>>i) v1.push_back(i);
    for(decltype(v1.size()) j=0;j!=v1.size()-1;++j)
        cout<<v1[j]+v1[j+1]<<" ";
    cout<<endl;
     for(decltype(v1.size()) j=0;j!=v1.size()-1;++j)
        cout<<v1[j]+v1[v1.size()-1-j]<<endl;
     return 0;
}
