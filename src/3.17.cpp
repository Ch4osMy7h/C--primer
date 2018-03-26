#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using  namespace std;

int main()
{
    string word;
    vector<string> Str;
    while(cin>>word)
        Str.push_back(word);
    for(auto c:Str)
    {
         cout<<c<<" ";
         for(auto &ch:c)
            ch=toupper(ch);
         cout<<c<<endl;
    }
    cout<<endl;
    return 0;
}
