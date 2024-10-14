/*Memorizzare il seme e il punteggio di due carte da poker. Dire quale delle carte vale di più.
  Il valore di una carta da poker è dato in primo luogo dal punteggio e in caso di parità di punteggio dal seme.
I punteggi in ordine decrescente sono {k,q,j,9,8,7,6,5,4,3,2,1}, i semi in ordine decrescente sono  {cuori, quadri, fiori, picche}
 per i semi memorizzare solo la lettera iniziale del seme.
PS: l’ordine dei semi può essere ricordato grazie alla frase “come quando fuori piove”
 in cui le parole ricordano i nomi dei semi (cuori, quadri, fiori, picche).*/
 #include <stdio.h>
 int main(){
    int carta1;
    int carta2;
    int seme1;
    int seme2;
    int punteggioc1;
    int punteggioc2;
    int punteggiok;
    int punteggioq;
    int punteggioj;
    int punteggio9;
    int punteggio8;
    int punteggio7;
    int punteggio6;
    int punteggio5;
    int punteggio4;
    int punteggio3;
    int punteggio2;
    int punteggio1;
    int cuori;
    int quadri;
    int fiori;
    int picche;
    printf("Inserisci il seme della prima carta");
    scanf("%d", &seme1);
    printf("Inserisci il punteggio della prima carta");
    scanf("%d", &punteggioc1);
    printf("Inserisci il seme della seconda carta");
    scanf("%d", &seme2);
    printf("Inserisci il punteggio della seconda carta");
    scanf("%d", &punteggioc2);

    punteggio1=1;
    punteggio2=2;
    punteggio3=3;
    punteggio4=4;
    punteggio5=5;
    punteggio6=6;
    punteggio7=7;
    punteggio8=8;
    punteggio9=9;
    punteggioj=10;
    punteggioq=11;
    cuori=4;
    quadri=3;
    fiori=3;
    picche=1;

    if(punteggioc1>punteggioc2)
        printf("La prima carta vale di più");
    if(punteggioc1<punteggioc2)
        printf("La seconda carta vale di più");
    if(punteggioc1==punteggioc2){
        if(seme1>seme2)
            printf("La prima carta ha più valore");
    }
    if(punteggioc1==punteggioc2){
        if(seme1<seme2)
            printf("La seconda carta ha più valore");
    }
 
    return 0;
 }