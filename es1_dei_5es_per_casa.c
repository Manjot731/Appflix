/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica; una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante*/
#include <stdio.h>
int main (){
    int n1;
    int n2;
    int n3;

        printf("Inserisci un numero");
        scanf("%d", &n1);
        printf("Inserisci un valore");
        scanf("%d", &n2);
        printf("Inserisci un numero");
        scanf("%d", &n3);
            if (n1==n2||n2==n3||n3==n1)
                printf("I numeri non sono accettabili, perchè ci sono uno o più valori uguali");
            
            if(n3-n2==n1)
                printf("I valori sono in progressione aritmetica");
            if(n3-n2!=n1)
                printf("I valori non sono in progressione aritmetica");




        























    return 0;
}