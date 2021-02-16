#include <iostream>
#include <string>
#include <cstdlib>
#include <random>

auto aswap(int *a, int *b)  -> void
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


auto main() -> int
{
    int a=2, b=3;
    std::cout<<"\n"<<"a: "<<a<<"b: "<<b<<"\n";
    aswap(&a, &b);
    std::cout<<"\n"<<"a: "<<a<<"b: "<<b<<"\n";

     return 0;
}
