/* Girilen 5 sayıyı bir diziye aktardıktan sonra bu 
diziyi fonksiyona gönderip dizideki en büyük ve en
 küçük sayı ile dizi toplamını bulup sonuçları
 main içinde yazdırınız.*/
#include <stdio.h>
#include <stdlib.h>
void enBuyukEnKucukToplam(int dizi[],int es, int *max,int *min,int *toplam){
    *max = dizi[0];
    *min = dizi[0];
    *toplam = 0;
    for(int i=0; i<es; i++){
    if(*max<dizi[i])
      *max = dizi[i];
    if(*min> dizi[i])
      *min = dizi[i];
      
      *toplam +=dizi[i];  
    }
}

int main(){
 int dizi[5];
   printf("dizinin elemanlarini giriniz:\n");
   for(int i=0; i<5; i++){
    printf("%d.sayiyi giriniz:",i+1);
    scanf("%d",&dizi[i]);
   }
   int enbuyuk,enKucuk,toplam;
   enBuyukEnKucukToplam(dizi,5,&enbuyuk,&enKucuk,&toplam);
    printf("dizideki en buyuk sayi::%d\n",enbuyuk);
    printf("dizideki en kucuk sayi:%d\n",enKucuk);
    printf("dizideki elemanlarin toplami:%d",toplam);
    return 0;
}