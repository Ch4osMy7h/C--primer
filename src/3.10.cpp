#include<iostream>
#include<string>
#include<cctype>
#define __STDC_VERSION__ 199901L
using std::cout; using std::string; using std::endl;
int main(void)
{
    string s="Hello,World!";
    for(auto c:s)
    {
        if(ispunct(c))
            cout<<c;
    }
    cout<<endl;
    return 0;
}
