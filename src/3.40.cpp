#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main()
{
    char cstr1="Hello!";
    char cstr2="Son!";
    constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
    char cstr3[new_size];
    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    std::cout << cstr3 << std::endl;
}
