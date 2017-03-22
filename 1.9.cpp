#include<iostream>
int main(void)
{
    int sum=0; int val=50;
    while(val<=100)
    {
        sum+=val;
        val++;
    }
    std::cout<<sum<<std::endl;
}
