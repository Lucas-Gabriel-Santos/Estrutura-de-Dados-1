#include "busca_seq_ordenada.hpp"

void bubblesort(int vetor[], int n){
    int troca;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(vetor[j] > vetor[j+1]){
                //Troca de elementos
                troca = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = troca;
            }
        }
    }
}

int busca_seq_ordenada(int arr[], int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == chave) {
            return i; // encontrado
        } else if (arr[i] > chave) {
            return -1; // como está ordenado, não há necessidade de continuar
        }
    }
    return -1; // não encontrado
}

int conta_especialidades_distintas(int arr[], int n){
    bubblesort(arr, n);
    int ultimoResultado = -1;
    int contador = 0;

    for(int i = 0; i < n; i++){
        int resultado = busca_seq_ordenada(arr, n, arr[i]);
        if(resultado != -1 && ultimoResultado != resultado){
            contador = contador + 1;
        }

        ultimoResultado = resultado;
    }
    return contador;
}


