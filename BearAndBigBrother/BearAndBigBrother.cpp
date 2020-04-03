#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;
	int i = 1;
	while(1){
		a *= 3;
		b *= 2;
		if(a > b)
		{
			std::cout << i;
			return 0;
		}
		i++;
	}
	return 0;
}
