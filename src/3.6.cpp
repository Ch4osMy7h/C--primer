#include<iostream>
#include<string>
#define __STDC_VERSION__ 199901L
using std::cout; using std::string; using std::endl;
int main(void)
{
    string s="Hello World";
    for(auto &c:s)
    {
        c='x';
    }
    cout<<s<<endl;
    return 0;
}
