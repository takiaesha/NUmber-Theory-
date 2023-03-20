#include <iostream>

bool is_divisible_by_13(int num)
{
	int alternating_sum = 0;
	int multiplier = -1;
	while (num > 0) {
		alternating_sum += multiplier * (num % 10);
		multiplier *= -1;
		num /= 10;
	}
	// checking if divisible by 13 or not
	return alternating_sum % 13 == 0;
}

int main()
{

	if (is_divisible_by_13(13))
		std::cout << "Yes" << std::endl; // False
	else
		std::cout << "No" << std::endl;
	return 0;
}
