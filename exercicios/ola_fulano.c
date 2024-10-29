#include <stdio.h>

int main(void)
{
    char nome[100];

    // Pergunta qual o nome do usuário
    printf("%s", "Qual o seu nome? ");
    scanf("%s", nome);

    // Imprime o nome do usuário
    printf("Olá, %s!\n", nome);
    return 0;
}