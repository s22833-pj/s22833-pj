
#include <iostream>
#include <string>
#include <cstdlib>

auto asearch(int a[], int n, int needle) -> int
{
    int result = -1;
    for (int i = 0; i < n; i++)
        if (a[i] == needle)
            result = i;
    return result;
}

auto main() -> int
{
    int a[10]= {42, 9, -1, 18, 59, 3, 101, 31, 72, 12}, b[10];
    std::cout<<"index of 101: "<<asearch(a, 10, 3)<<"\n";
    return 0;
}