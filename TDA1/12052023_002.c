#include <stdio.h>
#include <stdlib.h>

typedef struct COMPLEXO{
float x;
float y;

}NUMERO;


void inserir(NUMERO *numero1, NUMERO *numero2){
numero1 -> x = 7;
numero1-> y = -4;
numero2-> x = 5;
numero2 -> y = 2;
printf("Numero 1: %1.0f%1.0fi\n", numero1 -> x, numero1 -> y);
printf("Numero 2: %1.0f+%1.0fi\n\n", numero2 -> x, numero2 -> y);
}

void soma(NUMERO *numero1, NUMERO *numero2){
printf("Soma: %1.0f%1.0fi\n", numero1 -> x + numero2 -> x, numero1 -> y + numero2 -> y);
}

void sub(NUMERO *numero1, NUMERO *numero2){
printf("Subtracao: %1.0f%1.0fi", numero1 -> x - numero2 -> x, numero1 -> y - numero2 -> y);

}

void mult(NUMERO *numero1, NUMERO *numero2){
    printf("\nMultiplicacao: %1.0f%1.0fi\n", numero1->x*numero2->x - numero1->y*numero2->y, numero1->x*numero2->y + numero1->y*numero2->x);
}

void divisao(NUMERO *numero1, NUMERO *numero2){
    float r = (numero1 -> x * numero2 -> x + numero1 -> y * numero2 -> y) / (numero2 -> x * numero2 -> x + numero2 -> y * numero2 -> y);
    float i = ( numero1 -> y * numero2 -> x - numero1 -> x  * numero2 -> y) / ( numero2 -> x * numero2 -> x + numero2 -> y * numero2 -> y);
    printf("Divisao: %1.0f%1.0fi\n", r, i);
}

void liberar(NUMERO *numero1, NUMERO *numero2){
free(numero1);
free(numero2);
}
int main()
{
    NUMERO *numero1;
    NUMERO *numero2;
    numero1 = (NUMERO*) malloc(sizeof(NUMERO));
    numero2 = (NUMERO*) malloc(sizeof(NUMERO));
    inserir(numero1, numero2);
    soma(numero1, numero2);
    sub(numero1, numero2);
    mult(numero1, numero2);
    divisao(numero1, numero2);
    liberar(numero1, numero2);
    return 0;
}
