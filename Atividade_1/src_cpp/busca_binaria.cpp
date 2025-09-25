#include "busca_binaria.hpp"

bool isBadVersion(int version){
    int bad = 4;
    return version >= bad;
}

int busca_binaria(int n) {
    int esquerda = 0;
    int direita = n - 1;
    int resultado = -1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (isBadVersion(meio)) {
            resultado = meio;         // salva o primeiro bad
            direita = meio - 1;       // continua procurando à esquerda
        } else {
            esquerda = meio + 1;
        }
    }
    return resultado;
}

