#include<iostream>
#include<string>
using namespace::std;
int main(void)
{
    string s1,s2;
    do
    {
        auto size1=s1.size(),size2=s2.size();
        if(size1<size2)
            cout<<s1<<endl;
        else
            cout<<s2<<endl;
    }while(cin>>s1>>s2);
    return 0;
}
