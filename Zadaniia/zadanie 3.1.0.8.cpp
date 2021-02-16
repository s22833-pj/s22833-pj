
#include <iostream>
#include <string>
#include <cstdlib>

auto output(int a[], int n) -> void
{
    std::cout << a[0];
    for (int i = 1; i < n; i++)
        std::cout << ", " << a[i];
    std::cout << "\n";
}

auto bubbleSortdesc(int arr[], int n) -> int
{
    int i, ii;
    for (i = 0; i < n - 1; i++)
        for (ii = 0; ii < n - i - 1; ii++)
            if (arr[ii] < arr[ii + 1])
                aswap(&arr[ii], &arr[ii + 1]);
}

auto main() -> int
{
    int c[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    bubbleSortdesc(c, 10);
    output(c, 10);
    return 0;
}