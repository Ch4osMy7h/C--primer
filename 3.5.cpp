#include<iostream>
#include<string>
using std::string;
using std::cout; using std::cin; using std::endl;
int main(void)
{
    string s1,s2;
    cin>>s1;
    while(cin>>s2)
    {
        s1+=' '+s2;
        cout<<s1<<endl;
    }
    return 0;
}
