#include<iostream>
#include<stdexcept>
using namespace std;
istream& f(istream& in)
{
    int v;
    while(in>>v&&!in.eof())
    {
        cout<<v<<endl;
    }
    in.clear();
    return in;
}
int main()
{
    f(cin);
    return 0;
}
