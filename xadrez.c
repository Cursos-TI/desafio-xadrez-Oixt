#include <stdio.h>
int main(){
   //variaveis
 int torre, rainha = 1, bispo = 1; //para o uso do while e do-while foi nescessario acrescentar o valor 1
 int menucav, cavalo;
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
 


 //movimento cavalo
 int cavesq = 1, cavcima = 1;//variantes do-while

printf("\n\nVamos movimentar o Cavalo.\n");
printf("Vamos Fazer um ataque para Cima. Escolha Direita para encurralar o Rei,\n ou, Esquerda para eliminar a Rainha.\n\n");
printf("1.Direita\n");
printf("2.Esquerda\n");

scanf("%d", &menucav);
switch (menucav) // como sao dois tipos de loops aninhados, trouxe aqui o loop com for e com do-while
{
case 1:// exemplo com For.
   for ( cavalo = 1; cavalo < 2; cavalo++)
   {
      for (int cavdir = 1; cavdir <= 2; cavdir++)
      {
         printf("Cima \n");
      }
      printf("Direita.\n");
      printf("Rei encurralado.\n");
   }
   
   break;
case 2:// exemplo com do-while
   do
   {
      do
      {
         printf("Cima.\n");
         cavcima++;
      } while (cavcima <= 2);
      printf("Esquerda.\n");
      printf("Cavalo eliminou a Rainha.\n\n");
      cavesq++;
   } while (cavesq < 1);
   
break;

default: //caso a escolha solicitada seja incorreta
   printf("Escolha Incorreta!\n\n.");
   break;
}
    return 0; 
}