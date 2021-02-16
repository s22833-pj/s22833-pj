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
    int a;
    std::cout << "|a| * x = a\n";
    a = ask_user_for_integer("Enter value a: ");
    system("CLS");
    if (a > 0)
        std::cout << "|" << a << "| * 1 = " << a;
    else if (a < 0)
        std::cout << "|" << a << "| * -1 = " << a;
    else
        std::cout << "|" << a << "| * 0 = " << a;
    return 0;
}
