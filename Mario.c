#include <stdio.h>

int main(){
    int entrada;
    printf("Height: ");
    scanf("%d", &entrada);


    for (int i = 1; i <= entrada; i++){
            // Primeiro loop, imprime espaco se o valor da rotacao for menor que o valor da entrada
            // A partir do valor da entrada, imprime # ate o fim da rotacao
        for(int k = entrada; k >= 1; k--){
            if(k > i){
                printf(" ");
            } else{
                printf("#");
            }
        }
        printf(" ");

        //Segundo loop, segue ordem invertida. imprime # até o numero da rotacao. o espaco restante nao há necessidade.
        for(int j = 1; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
