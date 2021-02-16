
#include <iostream>
#include <string>
#include <cstdlib>

auto output(int a[], int n) -> void
{
    std::cout<<a[0];
    for(int i = 1; i < n; i++)std::cout<<", "<<a[i];
    std::cout<<"\n";
}
auto init(int a[], int n) -> void
{
    for(int i = 0; i < n; i++)a[i]=0;
}

auto main() -> int
{
    int a[10]= {42, 9, -1, 18, 59, 3, 101, 31, 72, 12}, b[10];
    init(b, 10);
    output(b, 10);
    return 0;
}
