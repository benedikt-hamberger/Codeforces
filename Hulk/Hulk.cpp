#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	
	std::string s = "I hate";
	for (int i = 1; i < n; ++i)
	{
		if(i%2==0)
		{
			s += " that I hate";
		}else
		{
			s += " that I love";
		}
	}
	s += " it";
	std::cout << s;
	return 0;
} 
