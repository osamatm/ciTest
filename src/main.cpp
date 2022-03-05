#include <iostream>
#include "myclass.h"

int main()
{
    std::cout << "This is Build Test Project. Rev1" << std::endl;

    myclass m1;

    std::cout << "X Value : " << m1.getValueX() << std::endl;
    std::cout << "Y Value : " << m1.getValueY() << std::endl;

    return 0;
}