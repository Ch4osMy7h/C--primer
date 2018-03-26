#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
istream& f(istream& in)
{
    string v;
    while(in>>v,!in.eof())
    {
        cout<<v<<endl;
    }
    in.clear();
    return in;
}
int main(void)
{
    ostringstream msg;
    msg<<"C++ primer"<<endl;
    istringstream in(msg.str());
    f(in);
    return 0;
}
