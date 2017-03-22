#include<iostream>
using namespace std;
void reset(int &i)
{
    i=0;
}
int main(void)
{
    int j;
    cin>>j;
    reset(j);
    cout<<j<<endl;
    return 0;
}
