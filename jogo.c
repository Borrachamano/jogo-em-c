#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    // Atualizando os valores que serão sorteados
    srand(time(NULL));

    // Especificando o idioma
    setlocale(LC_ALL, "Portuguese");
    
    // Declarando variáveis
    int user;
    int computador = rand() % 10;
    int total = 0;
    char opc;
    
    // Mostrando o cabeçalho
    printf("=======================\n");
    printf("  Jogo de adivinhação    \n");
    printf("=======================\n");
    
    // Pedindo o número sorteado
    while(1){
        // Jogo
        printf("Chute um número entre 0 e 10: ");
        scanf("%d", &user);
        total += 1;
        
        if(user == computador){
            printf("Parabéns! Você acertou com %d tentativas.\n", total);
            break;
        }
        
        else{
            if(user > computador){
                printf("Digite um valor menor.\n");
            }
            else if(user < computador){
                printf("Digite um valor maior.\n");
            }
        }
    }
    
    // Finalizando a execução
    return 0;
    
}

