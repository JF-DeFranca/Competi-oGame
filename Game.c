#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int numeroJogador, numeroComputador, resultado = 0;
    char tipoComparacao;


    // GERAR NUMERO ALEATORIO
    
    srand(time(0));
    numeroComputador = rand() %100 + 1; //NUMERO ENTRE 1 E 100

    // INICIO DO JOGO

    printf("Bem-Vindo ao Jogo Maior, Menor ou Igual\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Escolha o número (Entre 1 e 100): ");
    scanf("%d", &numeroJogador);




    switch (tipoComparacao)
    {
    case 'M' :
    case 'm' :
        printf("Vocè escolher a opção MAIOR\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;

        break;

    case 'N' :
    case 'n' :
       printf("Vocè escolher a opção MENOR\n");
       resultado = numeroJogador < numeroComputador ? 1 : 0;
        
        break;
    
    case 'I' :
    case 'i' :
       printf("Vocè escolher a opção IGUAL\n");
       resultado = numeroJogador == numeroComputador ? 1 : 0;
        
        break;
    
    default:
       printf("Opção Inválida!");

        break;
    }

       // EXIBE O NUMERO DO COMPUTADOR

       printf("O numero do computador é: %d\n", numeroComputador);

    if (resultado == 1)
    {
        printf("Parabéns, Você Venceu!!!\n");
    } else {
        printf("VOCÊ PERDEU!!!\n");
    }
    



return 0;






}