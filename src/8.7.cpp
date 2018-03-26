#include<iostream>
#include<fstream>
#include"Sales_data.h"
using namespace std;
int main(int argc,char *argv[])
{
    ifstream in(argv[1]);
    ofstream out(argv[2]);
    Sales_data total;
    if(read(in,total))
    {
        Sales_data trans;
        while(read(in,trans))
        {
            if(total.isbn()==trans.isbn())
                total.combine(trans);
            else(print(cout,total))<<endl;
            total=trans;
        }
    }
    print(cout,total)<<endl;
    return 0;
}
`
