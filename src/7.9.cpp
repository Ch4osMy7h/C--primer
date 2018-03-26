#include<iostream>
#include<string>
using namespace std;
istream&read(istream&is,Person &per)
{
    is>>per.strName>>per.strAddress;
    return is;
}
ostream&print(ostream &os,const Person &per)
{
    os<<per.getName()<<per.getrAddress();
    return os;
}
