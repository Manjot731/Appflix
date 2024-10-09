#include <stdio.h>

int main() {
    float a, b, c, media;
    
    printf("Scrivi un numero: ");
    scanf("%f", &a);
    printf("Scrivi un numero: ");
    scanf("%f", &b);
    printf("Scrivi un numero: ");
    scanf("%f", &c);
    media = (a + b + c) / 3;
    if (a<b&&a<c) {
        printf("A è il minimo\n");
    } else if (b<a&&b<c) {
        printf("B è il minimo\n");
    } else {
        printf("C è il minimo\n");
    }
    if (a>b&&a>c) {
        printf("A è il massimo\n");
    } else if (b>a&&b>c) {
        printf("B è il massimo\n");
    } else {
        printf("C è il massimo\n");
    }
    printf("La media aritmetica è: %f\n", media);
    return 0;
}
