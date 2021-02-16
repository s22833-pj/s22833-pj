
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

auto quickSort(int arr[], int low, int high) -> void
{
    if (low < high)
    {
        int part = apartition(arr, low, high);
        quickSort(arr, low, part - 1);
        quickSort(arr, part + 1, high);
    }
}

auto main() -> int
{
    int d[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    quickSort(d, 0, 9);
    output(d, 10);
     return 0;
}