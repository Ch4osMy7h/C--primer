#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::iterator;
int main(void)
{
    vector<int> v1(10,1);
    for(auto it=v1.begin();it!=v1.end();++it){
        *it*=2;
        cout<<*it<<endl;
    }
    return 0;
}
