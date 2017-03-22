#include<iostream>
#include<cstddef>
#include<vector>
using namespace::std;
int main(void)
{
    int a[10];
    int b[10];
    for(size_t i=0;i<10;i++)
    {
        a[i]=i;
    }
    for(size_t i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    vector<int> v1(10);
    for(auto iter=v1.begin();iter!=v1.end();iter++)
    {
        *iter=iter-v1.begin();
    }
    return 0;
}
