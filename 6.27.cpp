#include<iostream>
#include<initializer_list>
using namespace std;
int Chenfa(initializer_list<int> i1)
{
    int sum=0;
    for(auto val:i1)
        sum+=val;
    return sum;
}
int main(void)
{
    cout<<Chenfa({1,2,3,4});
    cout<<endl;
    return 0;
}
