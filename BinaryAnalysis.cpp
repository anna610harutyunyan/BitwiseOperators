#include <iostream>

void binaryAnalysis(int a)
{
	int i = 0;
	int binaryNum[32];
	while (a > 0)
	{
		binaryNum[i] = a % 2;
		a = a / 2;
		i++;
	}
	std::cout << "The provided number in binary_ ";
	for (int j = i - 1; j >= 0; --j)
	{
		std::cout  << binaryNum[j];
	}
	std::cout << std::endl;
	int zero = 0;//count of 0
	int one = 0;//count of 1

	for (int j = i - 1; j >= 0; --j)
	{
		if (binaryNum[j] == 0)
		{
			zero++;
		}
		else
		{
			one++;
		}
	}
	if (one > zero)
	{
		std::cout << "In the provided number the count of ones is more than the count of zeros _ \n";

	}
	else if(zero>one)
	{
		std::cout << "In the provided number the count of zeros is more than the count of ones _ \n";

	}
	else
	{
		std::cout << "In the provided number the count of zeros and ones are equual_\n";
	}
}

int main(int argc, char** argv)
{
	int num = 0;
	std::cout << "Please enter the number _";
	std::cin >> num;
	std::cout << std::endl;
	binaryAnalysis(num);


	return 0;
}