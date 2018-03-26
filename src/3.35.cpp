#include<iostream>
using std::cout;
using std::endl;
int main(void)
{
    int a[5]={1,2,3,4,5};
    int *p=a;
    *p=0;
    int i;
    for(i=0;i<5;i++)
        cout<<*(p+i)<<endl;
    return 0;
}
