#include<stdio.h>
int main (){
    int dizi[3]= {5,2,4};
    //2. yontem
    dizi[2]=4;
    dizi[1]=4;
    dizi[0]=4;

    /*
    dizi[2]=9;
    int vizeNot=55;
    dizi[2]=vizeNot;

    printf("dizinin 0.indeksi=%d",dizi[0]);
    */

    printf("dizinin  elemanları:");
    printf("%d",dizi[0]); //dizinin 0.indeksi, 1.elemanı 
    printf("%d",dizi[1]);
    printf("%d",dizi[2]);
   
   printf("\n dongu ile tersten yazdir");
    for(int i=2; i=0; i--){
        printf("dizi[%d]=%d. ",i,dizi[i]);
    }

     return 0;
}