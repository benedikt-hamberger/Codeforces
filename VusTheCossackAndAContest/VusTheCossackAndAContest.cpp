#include <iostream>

int main()
{
    int n, m, k;
    std::cin >> n >> m >> k;

    if(n <= m && n <= k){
        std::cout << "Yes";
    }else{
        std::cout << "No";
    }
    return 0;
}
