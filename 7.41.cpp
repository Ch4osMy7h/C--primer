#include <string>
#include <iostream>

class Sales_data {
    friend std::istream& read(std::istream& is, Sales_data& item);
    friend std::ostream& print(std::ostream& os,const Sales_data& item);
    friend Sales_data add(const Sales_data&lhs,const Sales_data&rhs);
public:
    Sales_data():Sales_data("",0,0,0)
    {
        cout<<"This functions don't accept any information"<<endl;
    }
    Sales_data():Sales_data(const string &book):Sales_data(book,0,0,0)
    {
        cout<<"This functions accept the information of book"<<endl;
    }
    Sales_data(std::istream &is):Sales_data()
    {
        read(is,*this);
        cout<<"该函数接入用户输入的信息"<<endl;
    }
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// member functions.
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// friend functions
std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
