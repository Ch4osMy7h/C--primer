#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int fact(int i)
{
    int sum=1;
    for(;i>=1;i--)
        sum*=i;
    return sum;
}
int main(void)
{
    int i;
    cin>>i;
    int sum=fact(i);
    cout<<sum<<endl;
    return 0;
}
