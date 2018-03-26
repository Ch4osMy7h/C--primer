#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v1,unsigned index)
{
    unsigned sz=v1.size();
    #ifndef NDEBUG
    cout<<sz<<endl;
    #endif // NDEBUG
    if(!v1.empty()&&index<sz)
    {
        cout<<v1[index]<<endl;
        print(v1,index+1);
    }
}
int main(void)
{
    vector<int> v1={1,2,3,4,5,6};
    print(v1,0);
    return 0;
}
