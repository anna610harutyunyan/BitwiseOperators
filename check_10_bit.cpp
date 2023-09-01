#include <iostream>

bool check_bit(int a)
{
	int b = 1<< 9;
	return a & b;
}

int main(int argc, char** argv)
{
	int a = 0;
	std::cout << "Enter the number _";
	std::cin >> a;
	std::cout << std::endl;

	std::cout << "The 10rd bit of the number (1-true, 0-false) " << std::boolalpha << check_bit(a) << std::endl;
	return 0;
}