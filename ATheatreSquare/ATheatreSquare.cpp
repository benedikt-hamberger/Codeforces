#include <iostream>
#include <cstdint>

int main()
{
    std::uint64_t n, m, a;
    std::cin >> n >> m >> a;


    std::uint64_t number_n = n / a + (n % a != 0);

    std::uint64_t number_m = m / a + (m % a != 0);


    std::uint64_t out  = number_n * number_m;
    std::cout << out << '\n';

    return 0;
}
