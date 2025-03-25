#include <stdio.h>


int main(){
   //variaveis
 int torre, rainha = 1, bispo = 1; //para o uso do while e do-while foi nescessario acrescentar o valor 1
 
//movimentacao da torre
printf("Torre:");
 for (torre = 0; torre <= 4; torre++)
 {
    printf("Direita.\n");
 }
 //movimentacao do bispo
printf("\n\nBispo:");
 while (bispo <= 5 )
 {
    printf("Cima, Direita.\n");
    

    bispo++;//incremento para nao dar erro no loop

 }

 //movimentacao da rainha
 printf("\n\nRainha:");
 do
 {
    printf("Esquerda.\n");
    rainha++;//incremento para nao dar erro no loop

 } while (rainha <= 9);
 

    return 0; 
}