#include <stdio.h>

void bubble_sort(int *v, int n){
	int i, k;
	for (i = 0; i < n - 1; i++){
		int trocou = 0;
		for (k = 0; k < n - 1; k++){
			if (v[k] > v[k + 1]){
				int tmp = v[k];
				v[k] = v[k + 1];
				v[k + 1] = tmp;
				trocou = 1;
			}
		if (!trocou) break;
		}
	}
}

int main (){
    int v[10] = {10, 8, 4, 9, 5, 2, 7, 1, 3, 6}, i;
    int n = sizeof(v) / sizeof(v[0]);

    // Passamos o 'n' calculado no main para a função
    bubble_sort(v, n);
    
    printf("Vetor ordenado: ");
    for (i = 0; i < n; i++){
        printf("%d%s", v[i], (i == n - 1) ? "" : ", ");
    }

    printf("\nTamanho do Vetor: %d\n", n);
    return 0;
}
