#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    int n;
    std::string x;
    std::vector<int> l;
    std::vector<std::string> str;

    for(int i = 0; i < t; i++){
        std::cin >> n >> x;
        l.push_back(n);
        str.push_back(x);
    }

    std::string a, b;

    for(int i = 0; i < t; i++){
        bool has_a_one = false;
        a = "";
        b = "";

        for(int j = 0; j < l[i]; j++){
            char c = str[i][j];
            if(has_a_one){
                a += '0';
                b += c;
            }else{
                if(c == '0'){
                    a += '0';
                    b += '0';
                }
                if(c == '2'){
                    a += '1';
                    b += '1';
                }
                if(c == '1'){
                    a += '1';
                    b += '0';
                    has_a_one = true;
                }
            }
        }
        std::cout << a << '\n';
        std::cout << b << '\n';
    }


    return 0;
}
