
#include <iostream>
#include <string>
#include <cstdlib>

auto amax(int a[], int n) -> int
{
    int maximum = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > maximum)
            maximum = a[i];
    return maximum;
}

auto main() -> int
{
    int a[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12}, b[10];
    std::cout<< "max: " << amax(a, 10) << "\n";
    return 0;
}