//Scrivi un programma che legge in input il valore di tre lati di un triangolo, individua se si tratta di un triangolo equilatero e ne calcola in tal caso l’area e il perimetro//
#include <stdio.h>
    int main(){
        float latoA;
        float latoB;
        float latoC;
        float area;
        float perimetro;
        float altezza;
        float base;
        printf("Scrivi un lato del tringolo");
        scanf("%f", &latoA);
        printf("Scrivi un lato del tringolo");
        scanf("%f", &latoB);
        printf("Scrivi un lato del tringolo");
        scanf("%f", &latoC);
        if (latoA==latoB&&latoB==latoC){
            printf("Il triangolo è un triangolo equilatero");
        perimetro=(latoA+latoB+latoC);
        base=latoA/2;
        altezza=(latoA*1.732)/2;
        area=(latoC*altezza)/2;
        printf("Il perimetro è:%f", perimetro);
        printf("L'area è:%f", area);
        }
        if (latoA!=latoB&&latoB!=latoC){
        printf("Questo triangolo non è un triangolo equilatero");
        }







        return 0;
}     

