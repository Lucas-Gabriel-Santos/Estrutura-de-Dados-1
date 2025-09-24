#include "busca_binaria.hpp"

bool isBadVersion(int version){
    int bad = 4;
    return version >= bad;
}

int busca_binaria(int n) {
    int esquerda = 0, direita = n - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if(isBadVersion(meio)){
            direita = meio - 1;
        }
        else{
            esquerda = meio + 1;
        }
    }
    return -1; // Não encontrado

}

