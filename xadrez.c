#include<stdio.h>

int main() {
// Número de casas que cada peça irá percorrer 
int torre = 5;
int bispo = 5;
int rainha = 8;
int cavalo = 1;
int i; //Variavel de controle

// Movimento da torre
printf("\nTorre:\n");
for (i= 0; i < torre; i++)
{
printf("Direita\n");
}
//Movimento do Bispo
printf("\nBispo:\n");
i = 0;
while (i < bispo) {
printf("Cima, Direita\n");
i++;
}
//Movimento da Rainha
printf("\nRainha:\n");
i = 0;
do {
printf("Esquerda\n");
i++;
} while (i < rainha);

printf("\n");
//Movimento do Cavalo
while (cavalo --)
{
printf("Cavalo:\n");
for (int i = 0; i <= 1; i++){
printf("\n");
printf("Cima\n");
}
printf("\n");
printf("Direita\n");
}

    return 0;
}