#include <iostream>
#include <string>
#include <cstdlib>
#include <random>

auto amemcpy (void* s, void* ss, size_t n) -> void
{
    auto proxy = reinterpret_cast<unsigned char*>(s);
    auto proxyt = reinterpret_cast<unsigned char*>(ss);
    for(auto i = size_t{0}; i < n; i++)
    {
      proxy[i]= proxyt[i];
    }
}

auto main() -> int
{
    std::string hello = "Hello World!";
    amemcpy(&hello[0], &hello[2], 3);
    std::cout<<hello<<"\n";

     return 0;
}
