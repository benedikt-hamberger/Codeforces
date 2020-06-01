#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::string word;
    std::string out[n];

    for(int i = 0; i < n; ++i){
        std::cin >> word;
        if(word.length() > 10){
            std::string abbreviation = "";
            abbreviation += word[0];
            abbreviation += std::to_string(word.length() - 2);
            abbreviation += word[word.length() - 1];
            out[i] = abbreviation;
        }
        else
            out[i] = word;
    }
    for(int i = 0; i < n; ++i){
        std::cout << out[i] << '\n';
    }
    return 0;
}
