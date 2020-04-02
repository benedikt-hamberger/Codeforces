#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    bool hard = false;
    int t;

    for (int i = 0; i < n; ++i) {
       std::cin >> t;
       if(t == 1){
           hard = true;
       }
    }
    if(hard){
        std::cout << "HARD" << "\n";
    }else{
        std::cout << "EASY" << "\n";
    }

    return 0;
}
