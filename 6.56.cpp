#include<iostream>
#include<vector>
using namespace std;
int func1(int a,int b)
{
    return a+b;
}
int func2(int a,int b)
{
    return a-b;
}
int func3(int a,int b)
{
    return a*b;
}
int func4(int a,int b)
{
    return a/b;
}
void Compute(int i,int j,int(*p)(int,int))
{
    cout<<p(i,j)<<endl;
}
int main(void)
{
    int i=5,j=10;
    decltype(func1)*p1=func1;
    decltype(func2)*p2=func2;
    decltype(func3)*p3=func3;
    decltype(func4)*p4=func4;
    vector<decltype(func1)*>vf={p1,p2,p3,p4};
    for(auto c:vf)
        Compute(i,j,c);
    return 0;
}
