#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	int numberOfBills = 0;
	while(n > 0)
	{
		if (n % 100 == 0) {
			n -= 100;
			numberOfBills++;
		}
		else if (n % 20 == 0) {
			n -= 20;
			numberOfBills++;
		}
		else if (n % 10 == 0) {
			n -= 10;
			numberOfBills++;
		}
		else if (n % 5 == 0) {
			n -= 5;
			numberOfBills++;
		}
		else{
			n -= 1;
			numberOfBills++;
		}

	}
	std::cout << numberOfBills;
	return 0;
} 
