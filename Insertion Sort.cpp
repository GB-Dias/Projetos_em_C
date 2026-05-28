#include <stdio.h>

void insertion_sort(int *v, int n){
	int i, k, j;
	for (i=1 ; i<n ; i++){
		printf("i = %d\n", i);
		
		int item_atual = v[i];

		int indice_para_inserir = i;
		for (k=i-1; k >= 0 && item_atual < v[k] ; k--){
			v[k+1] = v[k];
			indice_para_inserir--;
			trocou++;
		}
		v[indice_para_inserir] = item_atual;
        for(j=0; j < n; j++){
            printf("%d ", v[j]);
        }
	}
}
int main(){
	int v[6]={6, 9, 40, 3, 5, 16};
    int trocou =0;
    int i, j, k, n=6; 
	
    for(i=0; i<n-1; i++){
        printf("i = %d\n", i);
        for(k = 0; k < n - 1 ; k++){
            if (v[k] > v[k+1]) { 
                int tmp = v[k]; 
                v[k] = v[k + 1]; 
                v[k + 1] = tmp;
                trocou++;
            }
         }
               for(j=0; j < n; j++){
                    printf("%d ", v[j]);
            }
        printf("\ntrocou %d vezes",trocou);
            
        }
        printf("\n");
        }
        
    }
    printf("\nvetor ordenado: ");
    for(i = 0; i < n; i++)
        printf("%d ", v[i]);
    return 0;
}
