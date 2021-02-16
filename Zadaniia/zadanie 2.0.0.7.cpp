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
    int sum = 0;
    std::cout <<"0 ...%b a";
	a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	std::cout <<"0 ...%b a";
	b = ask_user_for_integer("Enter value b: ");
    for(auto i = 1; i < a; i++)
    {
        if(!(i%b))sum+=i;
    }
    std::cout<<"sum of numbers divisible by "<<b<<" up to "<<a<<": "<< sum;
    return 0;
}