#include <iostream>
#include <string>
#include <cstdlib>
#include <random>

auto amemrev (void* s, size_t n) -> void
{
    char temp[n];
    auto proxy = reinterpret_cast<unsigned char*>(s);
    for(auto i = size_t{0}; i < n; i++)
    {
        temp[i] = proxy[i];
    }
    for(auto i = n; i > size_t{0}; i--)
    {
        proxy[i] = temp[n-i];
    }
}

auto main() -> int
{
    std::string hello = "Hello World!";
    amemrev(&hello[0], 3);
    std::cout<<hello<<"\n";

     return 0;
}
