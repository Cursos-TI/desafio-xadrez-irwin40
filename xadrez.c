#include <stdio.h>

int main(){
    int t = 1, b = 1, r = 1;

//Torre

printf("\n\n-- Movimentação da Torre (5 casas para direita) -- \n\n");
for (int t = 1; t <= 5; t++){
    printf("Direita --> || ");
    }    

//Bispo

printf("\n\n\n-- Movimentação do Bispo (5 casas na diagonal para cima e à direita-- \n\n");
while (b <= 5){
    printf("Direita --> Cima ^^ || ");
    b++;} 

//Rainha
 
printf("\n\n\n-- Movimentação da Rainha (8 casas para a esquerda) -- \n\n");
    do {
        printf("<-- Esquerda ||");
        r++;
    } while (r <= 8);
printf("\n\n");    
return 0;
}