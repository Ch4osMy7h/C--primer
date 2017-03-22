#include<iostream>
#include<vector>
using namespace::std;
int main(void)
{
    const vector<string> scores={"F","D","C","B","A","A++"};
    int grade;
    while(cin>>grade)
    {
        if(grade<60){
            cout<<scores[0]<<endl;
        }
        else
            cout<<scores[(grade-50)/10]<<endl;
    }
    return 0;
}
