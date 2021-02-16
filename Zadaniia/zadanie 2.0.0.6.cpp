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
    a = ask_user_for_integer("Enter a:");
    std::cout<<"Enter values to test: (-1 to terminate)";
    while (std::cin >> b)
    {
        if(a>b)std::cout <<" "<<a<<" > "<<b<<"\n";
        else if(a<b)std::cout <<" "<<a<<" < "<<b<<"\n";
        else std::cout << " "<<a<<" = "<<b<<"\n";
        if(b==-1)break;
    }
    return 0;
}