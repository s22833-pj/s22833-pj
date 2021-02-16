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
	a = ask_user_for_integer("Enter height of triangle: ");

	for(int i = a; i>=0; i--)
    {
        for(int ii = 0; ii<i; ii++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
     return 0;
}