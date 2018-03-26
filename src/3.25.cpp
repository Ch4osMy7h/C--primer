#include<iostream>
#include<vector>
using namespace::std;
int main(void)
{
    vector<unsigned> scores(11,0);
    auto c=scores.begin();
    unsigned grade;
    while(cin>>grade)
    {
        if(grade<=100)
            ++(*(c+grade/10));
    }
    return 0;
}
