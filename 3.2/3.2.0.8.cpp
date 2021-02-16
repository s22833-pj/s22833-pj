
#include <iostream>
#include <string>
#include <cstdlib>
#include <random>

auto amemrand (void* s, size_t n) -> void
{
    std::random_device engine;
    auto proxy = reinterpret_cast<unsigned char*>(s);
    for(auto i = size_t{0}; i < n; i++)
    {
        proxy[i] = engine();
    }
}
auto main() -> int
{
    std::string hello = "Hello World!";
    amemrand(&hello[3], 3);
    std::cout<<hello<<"\n";
     return 0;
}
