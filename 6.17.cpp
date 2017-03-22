#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool test(const string& s)
{
   for(auto c:s)
    if(isupper(c))
        return true;
    return false;
}
void change(string &s)
{
    for(auto &s1:s)
        s1=tolower(s1);
}
int main(void)
{
    string s1;
    cin>>s1;
    if(test(s1))
    {
        change(s1);
        cout<<s1<<endl;
    }
    else cout<<"No upper"<<endl;
    return 0;
}
