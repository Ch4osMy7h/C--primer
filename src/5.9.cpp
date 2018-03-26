#include<iostream>
using namespace::std;
int main(void)
{
    unsigned VolCnt=0;
    char ch;
    while(cin>>ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
           ++VolCnt;
    }
    cout<<VolCnt<<endl;
    return 0;
}
