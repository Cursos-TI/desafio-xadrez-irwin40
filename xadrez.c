#include <stdio.h>

//Movimentação da Torre
void movimento_torre(int casas_t){
    if (casas_t > 0){
    printf(" Direita -->\n");
    movimento_torre(casas_t-1);}
    }

// Movimentação do Bispo com recursividade e loops aninhados
void movimento_bispo(int casas_b) {
    if (casas_b > 0) { 
        for (int i = 0; i < 1; i++) { // Movimento para a direita
            printf("Direita --> || ");

            for (int j = 0; j < 1; j++) { // Apenas um movimento para cima
                printf("Cima ^^\n");
            }
        }

        // Chamando recursivamente a função reduzindo o número de casas
        movimento_bispo(casas_b - 1);
    }
}

    //Movimentação da Rainha
    void movimento_rainha(int casas_r){
        if (casas_r > 0){
            printf(" Esquerda <--\n");
            movimento_rainha(casas_r-1);}
        
    }
    
int main(){
    int b = 1, r = 1, k = 1;

//Torre
    printf("\n\n-- Movimentação da Torre (5 casas para à direita) -- \n\n");
    movimento_torre(5); // 5 casas para a direita


//Bispo

    printf("\n\n\n-- Movimentação do Bispo (5 casas na diagonal para cima e à direita) -- \n\n");
    movimento_bispo(5); // 5 casas na diagonal para cima e à direita 

//Rainha
 
printf("\n\n\n-- Movimentação da Rainha (8 casas para a esquerda) -- \n\n");
    movimento_rainha(8); // 8 casas para a esquerda
   

// Cavalo
printf("\n\n\n-- Movimentação do Cavalo (duas casas para cima e uma para a direita) -- \n\n");

    // Loop externo para iniciar o movimento do cavalo
    for (int i = 0; i < 1; i++) {

        // Loop interno para movimentação vertical (duas casas para cima)
        for (int j = 0; j < 2; j++) {
            printf("Cima ^^ || ");

            continue; // Segue para a próxima iteração sem código adicional
        }

        printf("Direita --> || \n"); // Movimento único para a direita

        break; // Encerra o loop externo após completar o movimento do cavalo
    }
printf("\n\n");
return 0;
}