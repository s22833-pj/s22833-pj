
#include <iostream>
#include <string>
#include <cstdlib>
#include <random>

auto amemfrob (void* s, size_t n) -> void
{
    auto proxy = reinterpret_cast<unsigned char*>(s);
    for(auto i = size_t{0}; i < n; i++)
    {
        proxy[i] = (proxy[i] ^ 42);
    }
}

auto main() -> int
{
    std::string hello = "Hello World!";
    amemfrob(&hello[0], 3);
    std::cout<<hello<<"\n";

     return 0;
}
