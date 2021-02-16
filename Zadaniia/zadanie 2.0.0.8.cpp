#include <iostream>
#include <string>
#include <cstdlib>
auto ask_user_for_integer(std::string const prompt) -> int
{
    if (not prompt.empty())
    {
        std::cout << "\n"
                  << prompt;
    }
    auto value = std::string{};
    std::getline(std::cin, value);
    return std::stoi(value);
}

auto main() -> int
{
    int a;
    std::cout <<"a! = x";
    a = ask_user_for_integer("Enter value a: ");
    int factorial = 1;
    for(auto i = 1; i <= a; i++)
    {
        factorial *= i;
    }
    std::cout <<"a! = "<<factorial;
    return 0;
}