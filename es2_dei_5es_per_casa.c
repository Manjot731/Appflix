/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo (perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)*/
#include <stdio.h>
int main(){
    float n1;
    float n2;
    float n3;
            printf("Inserisci tre numeri\n");
                scanf("%f %f %f", &n1, &n2, &n3);

            if(n1+n2>n3&&n1+n3>n2&&n2+n3>n1){
                printf("I numeri possono essere i lati di un triangolo\n");
            }
             else
            {
                printf("I numeri non possono essere i lati di un triangolo\n");
            }
    return 0;
}