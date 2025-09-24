#include "recursao.hpp"

int recursao(const string &str, char alvo){
    if(str.length() == 0){
        return 0;
    }

    string nova_str = str.substr(1, str.length() - 1);
    if(str[0] == alvo){
        return 1 + recursao(nova_str, alvo);
    }

    return recursao(nova_str, alvo);
}
