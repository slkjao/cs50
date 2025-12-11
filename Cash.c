#include<stdio.h>

int main(){
    double valorTotal, valorPago, troco;
    int quantidadeMoedas = 0;
    printf("Valor total do pedido:");
    scanf("%lf", &valorTotal);
    printf("Valor pago:");
    scanf("%lf", &valorPago);
    if(valorTotal > valorPago){
        printf("Valor insuficiente para pagar a conta");
    } else {
        troco = valorPago - valorTotal;
        printf("\nTroco = %.2f", troco);
        troco *= 100;
        printf("\nTroco a ser devolvido:\n");
        do{
            if (troco >= 100){
                do{
                    quantidadeMoedas++;
                    troco -= 100;
                } while(troco >=100);
                printf("Moedas de 1 real: %d\n", quantidadeMoedas);
                quantidadeMoedas = 0;
            } else if (troco >= 50){
                do{
                    quantidadeMoedas++;
                    troco -= 50;
                } while(troco >= 50);
                printf("Moedas de 50 centavos: %d\n", quantidadeMoedas);
                quantidadeMoedas = 0;
            } else if (troco >= 25){
                do{
                    quantidadeMoedas++;
                    troco -= 25;
                } while(troco >= 25);
                printf("Moedas de 25 centavos: %d\n", quantidadeMoedas);
                quantidadeMoedas = 0;
            } else if (troco >= 10){
                do{
                    quantidadeMoedas++;
                    troco -= 10;
                } while(troco >= 10);
                printf("Moedas de 10 centavos: %d\n", quantidadeMoedas);
                quantidadeMoedas = 0;
            } else if (troco >= 5){
                do{
                    quantidadeMoedas++;
                    troco -= 5;
                } while(troco >= 50);
                printf("\nMoedas de 5 centavos: %d\n", quantidadeMoedas);
                quantidadeMoedas = 0;
            } else if (troco >= 1){
                do{
                    quantidadeMoedas++;
                    troco -= 50;
                } while(troco >= 1);
                printf("\nMoedas de 1 centavo: %d\n", quantidadeMoedas);
                quantidadeMoedas = 0;
            }

        } while (troco > 0);
    }
    return 0;
}


