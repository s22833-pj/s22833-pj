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
    int a, b;
    a = ask_user_for_integer("Enter width of square: ");
	b = ask_user_for_integer("Enter height of square: ");

	for(int i = 0; i<b; i++)
    {
        for(int ii = 0; ii<a; ii++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}