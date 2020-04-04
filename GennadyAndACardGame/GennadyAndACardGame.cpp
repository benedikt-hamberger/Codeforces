#include <iostream>
#include <cstring>

int main()
{
    std::string cardOnTable;
    std::cin >> cardOnTable;

    std::string ret = "NO";

    std::string card;
    for (int i = 0; i < 5; ++i) {
       std::cin >> card;

       if (card.c_str()[0] == cardOnTable.c_str()[0] || card.c_str()[1] == cardOnTable.c_str()[1]){
           ret = "YES";
       }
    }

    std::cout << ret;
    return 0;
}
