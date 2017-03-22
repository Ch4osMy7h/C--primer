#include<iostream>
#include<string>
using std::string;
using std::cout; using std::cin; using std::endl;
int main(void)
{
    string s1,s2;
    cin>>s1>>s2;
    string::size_type len1=s1.size(),len2=s2.size();
    if(len1==len2)
        cout<<"Yes"<<endl;
    else if(len1>len2)
        cout<<s1<<endl;
        else cout<<s2<<endl;
    return 0;
}
