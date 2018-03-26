std::istream &read(std::istream &is,Sales_date &item)
{
    is>>item.bookNo >>item.units_sold >> item.sellingprice >> item.saleprice;
    return is;
}
std::ostream &printf(std::ostream &os,const Sales_data &item)
{
    os<<item.isbn()<<" "<<item.units_sold<<" "<<item.sellingprice<<" "<<item.saleprice<<" "<<item.discount;
    return os;
}
Sales_data add(const Sales_data &lhs,const Sales_data &rhs)
{
    Sales_data sum=lhs;
    sum.combine(rhs);
    return sum;
}
