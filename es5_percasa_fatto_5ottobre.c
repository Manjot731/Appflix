#include<stdio.h>
#include <math.h>
    int main (){
        int numero;
        int migliaia;
        int centinaia;
        int decine;
        int unita;
                printf("Inserisci un valore minore di 10000\n");
                    scanf("%d", &numero);
                    if (numero<10001){
                        migliaia = numero / 1000;
                        centinaia = (numero % 1000) / 100;
                        decine = (numero%100)/10;
                        unita = numero % 10;


                            printf("Le migliaia, centinaia, decine, unita sono: %d, %d, %d, %d", migliaia, centinaia, decine, unita);
                        
                    }
                    else
                    printf("Il numero inserito non è minore di 10000");
                    return 0;
    }
