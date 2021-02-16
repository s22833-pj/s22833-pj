
#include <iostream>
#include <string>
#include <cstdlib>

auto asum(int a[], int n) -> int
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

auto main() -> int
{
    int a[10]= {42, 9, -1, 18, 59, 3, 101, 31, 72, 12}, b[10];
    std::cout<<"sum: "<<asum(a, 10)<<"\n";
    return 0;
}