/* 10 elemanlı bir dizideki en büyük sayıyı
 özyinelemeli olarak bulunuz*/
#include <stdio.h>
#include <stdlib.h>
int enBuyukSayi(int dizi[],int es){
   
   if(es==1)
     return  dizi[0];
  
  int enBuyuk =enBuyukSayi(dizi,es-1);
    if(dizi[es-1]>enBuyuk){
     return dizi[es-1];
    }
     else{
        return enBuyuk;
     }
}
int main(){
   int i,dizi[10];
   
   printf("dizinin elemanlarini giriniz:\n");
   for(i=0; i<10; i++){
    printf("%d.sayiyi giriniz:",i+1);
    scanf("%d",&dizi[i]);
   }
   int enBuyuk = enBuyukSayi(dizi,10);
      printf("dizideki en buyuk sayi:%d",enBuyuk);
    return 0;
}
