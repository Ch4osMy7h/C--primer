#include<iostream>
#include<string>
#define __STDC_VERSION__ 199901L
using std::cout; using std::string; using std::endl;
int main(void)
{
    string s="Hell1 World";
    for(char &c:s)
    {
        c='x';
    }
    cout<<s<<endl;
    return 0;
}
