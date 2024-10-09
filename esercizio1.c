//Verificare se un numero dato in input è divisibile sia per 3 sia per 5//
#include <stdio.h>
    int main(){
        int n1;
        n1=0;
        printf("Scrivi un numero");
        scanf("%d", &n1);
        if (n1%3==n1%5)
        printf("Il valore inserito è divisibile per 3 sia per 5");
        else
        if (n1%3!=n1%5)
        printf("Il valore non è divisibile per 3 o 5 oppure per tutti e due");
        return 0;
    }


