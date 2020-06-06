#include <iostream>

int main()
{
    int n, m, a, b;
    std::cin >> n >> m >> a >> b;


    if( m > n){
        if(b > n * a){
            std::cout << n * a << '\n';
        }else{
            std::cout << b << '\n';
        }
    }else{
        if(m * a > b){ // b is better deal
            if(a > b){
                if(n % m == 0){
                    std::cout << n / m * b << '\n';
                }else{
                    std::cout << n / m * b  + b<< '\n';
                }

            }else{
                std::cout << n / m * b + (n%m * a) << '\n';
            }
        }else{ // a is better deal
            std::cout << n * a << '\n';
        }
    }




    return 0;
}
