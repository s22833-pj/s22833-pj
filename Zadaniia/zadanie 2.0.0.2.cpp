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
  std::cout << "{a}, ...(%c=0),  b , c!=0";
    a = ask_user_for_integer("\nEnter value a: ");
	system("CLS");
	std::cout <<" "<<a<<", ...(%c=0), {b}, c!=0";
	b = ask_user_for_integer("\nEnter value b: ");
	system("CLS");
	std::cout <<" "<<a<<", ...(%c=0),  "<<b<<" , c!=0";
	c = ask_user_for_integer("\nEnter value c: ");
	system("CLS");
	if(c!=0)
    {
        for(int i =a; i <= b; i++)
        {
            if(!(i%c))std::cout << i << ", ";
        }
    }
    else
    {
        std::cout<<"c cannot be equal to 0";
    }
    return 0;
}