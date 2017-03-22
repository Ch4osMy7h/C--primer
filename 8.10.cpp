#include<string>
#include<iostream>
#include<vector>
#include<sstream>
#include<fstream>
using namespace std;
int main(void)
{
    ifstream in("Sales_data.h");
    string line;
    vector<string> words;
    while(getline(in,line))
    {
        words.push_back(line);
    }
    in.close();
    vector<string>::const_iterator it=words.begin();
    while(it!=words.end())
    {
        istringstream line_str(*it);
        string word;
        while(line_str>>word)
            cout<<word<<" ";
        cout<<endl;
        ++it;
    }
    return 0;
}
