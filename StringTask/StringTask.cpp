#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;


    std::string out;

    for(int i = 0; i < s.length(); i++){
        if(!(s[i] == 'A' || s[i] == 'a' ||
           s[i] == 'E' || s[i] == 'e' ||
           s[i] == 'I' || s[i] == 'i' ||
           s[i] == 'O' || s[i] == 'o' ||
           s[i] == 'Y' || s[i] == 'y' ||
           s[i] == 'U' || s[i] == 'u'))
        {
            out += '.';
            out += tolower(s[i]);
        }

    }
    std::cout << out << '\n';

    return 0;
}
