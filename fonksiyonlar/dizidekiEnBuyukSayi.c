/* Parametre olarak gönderilen bir tamsayı dizisindeki 
en büyük elemanı döndüren fonksiyon*/
#include <stdio.h>
#include <stdlib.h>

int enBuyukMu(int dizi[],int N){
    int i,enBuyuk=dizi[0];
     for(i=0; i<N; i++){
        if(enBuyuk<dizi[i])
         enBuyuk = dizi[i];
     }
     return enBuyuk;
}

int main(){
   int N,i;
   printf("dizinin eleman sayisini giriniz:");
   scanf("%d",&N);
int dizi[N];
    printf("dizinin eleman sayilarini giriniz:\n");
   for(i=0; i<N; i++){
    printf("%d.sayiyi giriniz:",i+1);
    scanf("%d",&dizi[i]);
   }
   int enBuyuk = enBuyukMu(dizi,N);

   if(enBuyuk){
     printf("dizideki en buyuk sayi %d sayisidir",enBuyuk); 
    }
    return 0;
}