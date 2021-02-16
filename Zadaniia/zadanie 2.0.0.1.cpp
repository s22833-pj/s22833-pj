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
    int a, b, c;
    std::cout << "{a}, ...,  b";
    a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	std::cout <<" "<<a<<", ..., {b}";
	b = ask_user_for_integer("Enter value b: ");
	system("CLS");
	for(int i =a; i < b; i++)
    {
        std::cout << i << ", ";
    }
    std::cout << b;
    return 0;
}