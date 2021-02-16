#include <iostream>
#include <string>
#include <cstdlib>
#include <random>


auto print(std::string *str)
{
    std::cout<<str<<" = "<<*str;
}

auto main() -> int
{
    std::string hello = "Hello World!";
    print(&hello);
     return 0;
}
