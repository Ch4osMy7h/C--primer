#include<iostream>
using namespace std;
int exchange(int *p1,int *p2)
{
    int i;
    i=*p1;
    *p1=*p2;
    *p2=i;
}
int main(void)
{
    int i,j;
    cin>>i>>j;
    int *p1=&i;
    int *p2=&j;
    exchange(p1,p2);
    cout<<i<<" "<<j<<endl;
    return 0;
}
