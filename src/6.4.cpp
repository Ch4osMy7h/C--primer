#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int Abs(int i)
{
    return (i>0)?i:-i;
}
int main(void)
{
    int i;
    cin>>i;
    cout<<Abs(i)<<endl;
    return 0;
}
