#include <iostream>
#include <bitset>
#include <string>

class Solution
{
public:
	std::string addBinary(std::string a, std::string b)
	{
		int carry = 0;
		std::string result = "";
		int i = a.size() - 1;
		int j = b.size() - 1;

		while (i >= 0 || j >= 0 || carry > 0)
		{
			int temp = carry;
			if (i >= 0)
			{
				temp += a[i] - '0';
				i--;
			}
			if (j >= 0)
			{
				temp += b[j] - '0';
				j--;
			}
			carry = temp / 2;
			result = std::to_string(temp % 2) + result;
		}
		return result;

	}

};

int main(int argc, char** argv)
{
	Solution obj;
	std::string a = "10001";
	std::string b = "100101";
	std::cout << "The sum of thee strings is_ " << obj.addBinary(a, b);

	return 0;
}