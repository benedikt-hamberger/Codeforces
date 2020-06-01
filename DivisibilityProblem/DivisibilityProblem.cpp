#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    int a, b;
    int c;

    int moves[t];

    for(int i = 0; i < t; ++i){
        std::cin >> a >> b;

        if(a % b == 0){
            moves[i] = 0;
        }else{
            c = a / b;
            c = (c + 1) * b;
            moves[i] = c - a;
        }
    }

    for(int i = 0; i < t; ++i){
        std::cout << moves[i] << '\n';
    }
    return 0;
}
