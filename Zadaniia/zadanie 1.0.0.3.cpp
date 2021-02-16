#include <iostream>
#include <string>
#include <cstdlib>
auto ask_user_for_integer(std::string const prompt) -> int
{
	if (not prompt.empty())
	{
		std::cout << prompt;
	}
	auto value = std::string{};
	std::getline(std::cin, value);
	return std::stoi(value);
}

auto main() -> int
{
	int a;
	std::cout << "|a| = ?\n";
	a = ask_user_for_integer("Enter value a: ");
	system("CLS");
	std::cout << "|" << a << "| = " << abs(a);
	return 0;
}