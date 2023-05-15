#include <stdio.h>
#include <stdlib.h>

typedef struct CUBO{
    float lado;
    float area;
    float volume;

}CUBO;

void inserir(CUBO *lados){
printf("Insira o tamanho dos lados do cubo: ");
scanf("%f", &lados -> lado);
lados -> area = 6*((lados -> lado)*(lados-> lado));
lados -> volume = lados -> lado * lados-> lado * lados -> lado;
}


void printar(CUBO *lados){
printf("\nLados: %1.2f", lados-> lado);
printf("\nArea: %1.2f", lados-> area);
printf("\nVolume: %1.2f", lados-> volume);
}

int main()
{
    CUBO *lados;
    lados = (CUBO*) malloc(sizeof(CUBO));
    inserir(lados);
    printar(lados);
    free(lados);
    return 0;
}
