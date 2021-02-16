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
    int div=0;
    std::cout << "is a prime?";
    a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	for(int i = a; i>0; i--)
    {
        if(a%i==0)div++;
    }
    if(div>2)std::cout<<"a isn't prime\n";
    else std::cout<<"a is prime\n";
        return 0;
}