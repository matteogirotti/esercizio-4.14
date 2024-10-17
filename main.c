#include <stdio.h>

int main(void) {
    const int giorni=10;
    float temp;
    int aumenti=0;
    int diminuizioni=0;
    int i;
    float tempPrecedente=5.0;
    for(int i=0; i<giorni;i++);
    printf("inserisci la temperatura per il giorno %d:", i+1);
    scanf("%f",&temp);
    if(temp>tempPrecedente) {
        aumenti++;
    }else if(temp<tempPrecedente) {
        diminuizioni++;
    }
    tempPrecedente=temp;
    printf("numero di volte che la temperatura e' aumentata:%d\n",aumenti);
    printf("numero di volte che la temperatura e' diminuita:%d\n",diminuizioni);
}

