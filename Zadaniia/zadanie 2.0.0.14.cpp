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

	if(a>=3&&b>=3)
    {
    
        for(int i = 0; i<a; i++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
        for(int i = 0; i<b-2; i++)
        {
            std::cout<<"*";
            for(int ii = 0; ii<a-2; ii++)
            {
                std::cout<<" ";
            }
            std::cout<<"*\n";
        }
        for(int i = 0; i<a; i++)
        {
            std::cout<<"*";
        }
    }
    return 0;
}