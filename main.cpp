#include <iostream>

int main() {
	int x;
	int y;
	int res;
	char opr;
	
	std::cout << "Enter First Number: ";
	std::cin >> x;
	std::cout << "\n";
	std::cout << "Enter Second Number: ";
	std::cin >> y;
	std::cout << "\n";
	std::cout << "Enter Opreation (+, -, *, /): ";
	std::cin >> opr;
	std::cout << "\n";

	while (true)
	{
		if (opr == '+')
	{
		res = x + y;
		std::cout << res;
		break;
	}
	else if (opr == '-')
	{
		res = x - y;
		std::cout << res;
		break;
	}
	else if (opr == '*')
	{
		res = x * y;
		std::cout << res;
		break;
	}
	else if (opr == '/')
	{
		res = x / y;
		std::cout << res;
		break;
	}
	else {
		std::cout << "Invaid Input";
		continue;
	}
	}

}
