#include<iostream>
using namespace::std;
int main(void){
    unsigned VolCnt=0;
    char ch;
    while(cin>>ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
           ++VolCnt;
    }
    cout<<VolCnt<<endl;
    return 0;
}
