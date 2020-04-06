#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;


    int numberOfN = 0;
    int numberOfO = 0;
    int numberOfE = 0;
    int numberOfZ = 0;
    int numberOfR = 0;

    for(int i = 0; i < n; i++)
    {
        if(s.c_str()[i] == 'o') numberOfO++;
        if(s.c_str()[i] == 'n') numberOfN++;
        if(s.c_str()[i] == 'e') numberOfE++;
        if(s.c_str()[i] == 'z') numberOfZ++;
        if(s.c_str()[i] == 'r') numberOfR++;
    }

    std::string sOut = "";

    while(numberOfO > 0 && numberOfN > 0 && numberOfE > 0){
        sOut += "1 ";
        numberOfO--;
        numberOfN--;
        numberOfE--;
    }

    while(numberOfZ > 0 && numberOfE > 0 && numberOfR > 0 && numberOfO > 0){
        sOut += "0 ";
        numberOfZ--;
        numberOfE--;
        numberOfR--;
        numberOfO--;
    }
    std::cout << sOut;

    return 0;
}
