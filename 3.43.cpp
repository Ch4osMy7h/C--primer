#include<iostream>
#include<vector>
#include<iterator>
using namespace::std;
int main(void)
{
    int ia[3][4]={};
    for(const int(&row)[4]:ia)
    for(int col:row){
        cout<<col;
    }
    cout<<endl;
    size_t row1,col1;
    for(row1=0;row1!=3;row1++)
        for(col1=0;col1!=4;col1++)
    cout<<ia[row1][col1];
    cout<<endl;
    for(int (*p)[4]=ia;p!=ia+3;++p)
        for(int *q=*p;q!=*p+4;++q)
        cout<<*q;
    cout<<endl;
    return 0;
}
