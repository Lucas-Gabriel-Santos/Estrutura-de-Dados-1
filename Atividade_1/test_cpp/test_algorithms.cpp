#include <iostream>
#include <iomanip>
#include <vector>
#include "busca_seq_ordenada.hpp"
#include "busca_binaria.hpp"
#include "recursao.hpp"
using namespace std;

#define RUN_TEST(name, expr, expected)                                 \
    do {                                                               \
        int result = (expr);                                           \
        std::cout << std::left << std::setw(25) << name                \
                  << ": " << ((result == (expected)) ? "OK" : "FAIL")  \
                  << std::endl;                                        \
    } while(0)

int main() {
    //vetor desordenado
    int arr1[] = {10, 5, 3, 14, 14, 1, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    //vetor ordenado
    int arr2[] = {1, 8, 15, 25, 26, 37, 40};
    int n2 = sizeof(arr1) / sizeof(arr1[0]);

    //Eexemplo de chamada da macro RUN_TEST
    //RUN_TEST("Titulo do teste", nome_da_funcao(entradas das funcao), resposta_esperada);

    cout << "Teste da busca sequencial em vetor ordenado" << endl;
    RUN_TEST("Busca ordenada", busca_seq_ordenada(arr2, n2, 25 ), /* esperado */ 3);
    RUN_TEST("Busca ordenada", busca_seq_ordenada(arr2, n2, 100), /* esperado */ -1);

    cout << "Teste da busca sequencial em vetor desordenado" << endl;
    RUN_TEST("Busca ordenada", busca_seq_ordenada(arr1, n1, 7 ), /* esperado */ -1);
    RUN_TEST("Busca ordenada", busca_seq_ordenada(arr1, n1, 14), /* esperado */ 3);

    cout << "Função da contagem das especialidades distintas" << endl;
    RUN_TEST("Busca ordenada", conta_especialidades_distintas(arr1, 7), /* esperado */ 6);
    RUN_TEST("Busca ordenada", conta_especialidades_distintas(arr2, 7), /* esperado */ 7); 

    cout << "Teste da busca binária e BadVersion" << endl;
    RUN_TEST("Busca binaria", busca_binaria(4), /* esperado */ -1);
    RUN_TEST("Busca binaria - first bad version", busca_binaria(10), /* esperado */ 4);

    cout << "Teste da busca recursiva" << endl;
    RUN_TEST("Recursao", recursao("banana", 'a'), /* esperado */ 3);
    RUN_TEST("Recursao", recursao("terra", 'r'),  /* esperado */ 2);
    RUN_TEST("Recursao", recursao("inconstitucionalissimamente", 'i' ), /* esperado */ 5); 


    return 0;
}

