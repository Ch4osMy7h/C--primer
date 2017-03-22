#include<iostream>
#include<string>
using std::string;
using std::cout; using std::cin; using std::endl;
int main(void)
{
    string s1,s2;
    int max;
    cin>>s1>>s2;
    if(s1==s2)
        cout<<"Yes"<<endl;
    else if(s1>s2)
        cout<<s1<<endl;
        else cout<<s2<<endl;
    return 0;
}
