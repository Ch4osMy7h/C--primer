#include<iostream>
using std::cin;
using std::cout; using std::endl;
int main(void)
{
    int i=50;
    int sum=0;
    while(i<=100)
    {
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
