#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
	int inputNumber;
	std::vector<int> numbers;
	
	for (int i = 0; i < 4; i++)
	{
		std::cin >> inputNumber;
		numbers.push_back(inputNumber);
	}

	sort(numbers.begin(), numbers.end());	
	
	int a, b, c;

	a = numbers[3] - numbers[2];
	b = numbers[3] - numbers[1];
	c = numbers[3] - numbers[0];
	
	
	std::cout << a << " " << b << " " << c;
	return 0;
} 
