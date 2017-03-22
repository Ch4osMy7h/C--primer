#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;
class Person
{
    private:
        string strName;
        string strAddress;
    public:
        Person=default();
        Person(const string &Name,const string &Add){
        strName=name;
        strAddress=Add};
        Person(istream &is){is>>*this;}
    public:
        string getName() const {return strName;}
        string getAddress()const {return strAddress;}
};


#endif // PERSON_H_INCLUDED
