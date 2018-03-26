#include<iostream>
#include<string>
using std::string;
using std::cout; using std::cin; using std::endl;
int main(void)
{
    string sentence;
    while(getline(cin,sentence))
    {
        cout<<sentence<<endl;
        return 0;
    }

}
int main(void)
{
    string words;
    while(cin>>words)
    {
        cout<<words<<endl;
        return 0;
    }

}
