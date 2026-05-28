#include <stdio.h>

// Adicionamos o parâmetro 'n' para saber o tamanho do vetor
void selection_sort(int *v, int n){
    int i;
    for (i = 0; i < n - 1; i++){
        int indice_menor = i;
        int k;
        
        // Começamos a busca a partir de i + 1
        for(k = i + 1; k < n; k++){
            if(v[k] < v[indice_menor]){
                indice_menor = k;
            }
        }
        
        // Troca os valores
        int tmp = v[i];
        v[i] = v[indice_menor];
        v[indice_menor] = tmp;
    }
}

int main (){
    int v[10] = {10, 8, 4, 9, 5, 2, 7, 1, 3, 6}, i;
    int n = sizeof(v) / sizeof(v[0]);

    // Passamos o 'n' calculado no main para a função
    selection_sort(v, n);
    
    printf("Vetor ordenado: ");
    for (i = 0; i < n; i++){
        printf("%d%s", v[i], (i == n - 1) ? "" : ", ");
    }

    printf("\nTamanho do Vetor: %d\n", n);
    return 0;
}
