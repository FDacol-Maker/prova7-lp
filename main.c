#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    float nota1,nota2,nota3,nota4;
    float media = 0;

    printf("=============================\n");
    printf("===== BOLETIM FUNCIONAL =====\n");
    printf("=============================\n");

    printf("Digite o seu nome\n");
    scanf("%s", nome);

    printf("Digite a nota da avaliação 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota da avaliação 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota da avaliação 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota da avaliação 4: ");   
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    printf("A média do aluno é: \n\n" "%.2f" , media);

    if (media >= 7)
    {   
        printf("\nALUNO APROVADO!");
    }
    else 
    {
        printf("\nALUNO REPROVADO!");
    }

    printf("\n========================================");
    printf("\n===== RESUMO DA AVALIAÇÃO DO ALUNO =====");
    printf("\n========================================");
    printf("\n\nNome do aluno: ", "%d",nome);
    printf("\nNota da avaliação 1: ", "%f", &nota1);
    printf("\nNota da avaliação 2: ", "%f", &nota2);
    printf("\nNota da avaliação 3: ", "%f", &nota3);
    printf("\nNota da avaliação 4: ", "%f", &nota4);

    printf("\nMédia final do aluno: ", "%.2f", media);

}



