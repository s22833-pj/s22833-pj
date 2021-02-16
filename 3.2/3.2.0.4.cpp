#include <iostream>
#include <string>
#include <cstdlib>
#include <random>

auto amemset (void* s, int c, size_t n) -> void
{
    auto proxy = reinterpret_cast<unsigned char*>(s);
    for(auto i = size_t{0}; i < n; i++)
    {
      proxy[i]= (unsigned char)c;
    }
}

auto main() -> int
{
    std::string hello = "Hello World!";
    amemset(&hello[0], 't', 3);
    std::cout<<hello<<"\n";
     return 0;
}
