#include<iostream>
#include<vector>
using namespace::std;
int main(void)
{
    const vector<string> scores={"F","D","C","B","A","A++"};
    int grade;
    while(cin>>grade)
    {
        cout<<((grade<60)?scores[0]:scores[(grade-50)/10])<<endl;
    }
    return 0;
}
