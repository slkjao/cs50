#include<stdio.h>
#include<string.h>

int main()
{
    char numeroCartao[20];

    printf("Numero do cartao:\n");
    scanf("%19s", &numeroCartao);

    int somaDigitos = 0, tamanho = strlen(numeroCartao), alternar = 0, digito;

    for(int i = tamanho - 1; i >= 0; i--)
    {
        digito = numeroCartao[i] - '0';
        if(alternar)
        {
            digito *= 2;
            if(digito > 9)
            {
                digito = (digito / 10) + (digito % 10);
            }
        }

        somaDigitos += digito;
        alternar = !alternar;

    }
    if (somaDigitos % 10 == 0)
    {
        if(numeroCartao[0] - '0' == 4)
        {
            printf("VISA\n");
        }
        else
        {
            int doisPrimeirosDigitos = (numeroCartao[0] - '0') * 10 + (numeroCartao[1] - '0');
            if (doisPrimeirosDigitos >= 34 && doisPrimeirosDigitos <= 37){
                printf("AMEX");
            } if (doisPrimeirosDigitos >= 51 && doisPrimeirosDigitos <= 55){
                printf("MASTERCARD");
            }
        }
    }
    else
    {
        printf("Invalido");
    }

    return 0;
}


