#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int x = 0;
    int y = 0;
    int z = 0;

    int t_x, t_y, t_z;

    for(int i = 0; i < n; i++){
        std::cin >> t_x >> t_y >> t_z;
        x += t_x;
        y += t_y;
        z += t_z;
    }

    if( x == 0 && y == 0 && z == 0){
        std::cout << "YES" << '\n';
    }else
    {
        std::cout << "NO" << '\n';
    }

    return 0;
}
