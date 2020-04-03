#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;

	std::string s = "";
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> s;
		if (s == "Tetrahedron") sum += 4;
		if (s == "Cube") sum += 6;
		if (s == "Octahedron") sum += 8;
		if (s == "Dodecahedron") sum += 12;
		if (s == "Icosahedron") sum += 20;
	}
	
	std::cout << sum;
	return 0;
} 
