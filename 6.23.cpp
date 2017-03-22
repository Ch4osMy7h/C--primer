#include<iostream>
using namespace std;
void printf1(int i)
{
    cout<<i<<endl;
}
void printf2(const int *p1,size_t s)
{
    for(size_t i=0;i!=s;i++)
        cout<<*p1++<<endl;
}
int main(void)
{
    int i=0;
    int j[2]={0,1};
    printf1(i);
    printf2(j,sizeof(j)/sizeof(*j));
    return 0;
}
