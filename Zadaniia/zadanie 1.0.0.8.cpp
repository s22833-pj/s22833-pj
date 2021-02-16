#include <iostream>
#include <string>
#include <cstdlib>
auto ask_user_for_integer(std::string const prompt) -> int
{
    if (not prompt.empty())
    {
        std::cout << prompt;
    }
    auto value = std::string{};
    std::getline(std::cin, value);
    return std::stoi(value);
}

auto main() -> int
{
    int biggest, c, a, b;
    a = ask_user_for_integer("Enter value a: ");
    b = ask_user_for_integer("Enter value b: ");
    c = ask_user_for_integer("Enter value c: ");
    biggest = a;
    if (biggest < b)
        biggest = b;
    if (biggest < c)
        biggest = c;
    std::cout << "largest value: " << biggest;
    return 0;
}