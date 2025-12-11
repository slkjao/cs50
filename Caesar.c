#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char texto[100];
    int key;
    printf("Digite o valor da key: ");
    scanf("%d", &key);
    getchar();
    printf("\nDigite um texto: ");
    scanf("%[^\n]", texto);

    for(int i = 0; texto[i] != '\0'; i++){
        texto[i] = toupper(texto[i]);
    }

    printf("\nTexto digitado: %s\n", texto);

    key = key % 26;

    printf("\nKey acrescida: %d\n", key);

    for (int i = 0; i < strlen(texto); i++){
        printf("%c", texto[i]);
    }
    printf("\n");

    for (int i = 0; i < strlen(texto); i++){
        if (texto[i] >= 65 && texto[i] <= 90){
            printf("%c", (char)(texto[i] + key));
        } else {
            printf("%c", texto[i]);
        }
    }

    return 0;
}


