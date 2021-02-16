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
    int s;
   std::cout << "{a}, a+ s ...a+ s *n,  b , s!=0";
    a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	std::cout <<" "<<a<<", a+ s ...a+ s *n, {b}, s!=0";
	b = ask_user_for_integer("Enter value b: ");
	system("CLS");
	std::cout <<" "<<a<<", a+{s}...a+{s}*n,  "<<b<<" , s!=0";
	s = ask_user_for_integer("Enter value s: ");
	system("CLS");
	if(s!=0)
    {
        if((s<0&&a>b)||(s>0&&a<b))
        {
            for(int i =a; i <= b; i=i+s)
            {
                std::cout << i << ", ";
            }
        }
        else
        {
            std::cout << " addition of multiples of s will never result in exceeding b";
        }
    }
    else
    {
        std::cout<<"s cannot be equal to 0";
    }
    return 0;
}