#include<iostream>
#include"Sales_item.h";
using std::cin;
using std::cout;
using std::endl;
int main(void)
{
    Sales_data total;
    if(cin>>total)
    {
        Sales_data trans;
        while(cin>>trans)
        {
            if(total.isbn()==trans.isbn())
                total+=trans;
            else{
                cout<<total<<endl;
                total=trans;
            }
        }
        cout<<total<<endl;
    }
    else{
        cerr<<"No data?!"<<endl;
        return -1;
    }
    return 0;
}
