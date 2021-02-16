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
    int a, b, i, div;
    int primes=0;
    std::cout << "sum of primes less than or equal to a";
    a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	for(int i = 1; i<a; i++)
    {
        div=0;
        for(int ii = i; ii>0; ii--)
        {
            if(a%ii==0)div++;
        }
        if(div<3)primes+=i;
    }
	std::cout<<"sum of primes less than or equal to a: "<<primes;

    return 0;
}