#include<string>
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
    ifstream in("Sales_data.h");
    if(!in)
    {
        cerr<<"�޷��������ļ�"<<endl;
        return -1;
    }
    string line;
    vector<string> words;
    while(in>>line)
    {
        words.push_back(line);
    }
    in.close();
    vector<string>::const_iterator it=words.begin();
    while(it!=words.end())
    {
        cout<<*it<<endl;
        ++it;
    }
    return 0;
}
