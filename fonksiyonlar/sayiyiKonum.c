/*Bir tam sayı dizisinde istenen sayıyı arayıp
 bulunduğu konumu döndüren fonksiyonu yazınız.*/
#include<stdio.h>
#include <stdlib.h>
int konumBulma(int dizi[],int es,int aranan){
    int i,bulundu=0;
    for(i=0; i<es; i++){
       if(dizi[i] == aranan){
       bulundu=1;
       break;
       }
    }
}
int main(){
   int N,i;
       printf("N degerini griiniz:");
       scanf("%d",&N);
    int dizi[N];
       printf("dizinin elemanlarini giriniz:\n");
      for(i=0; i<N; i++){
        printf("%d.elemani giriniz:",i+1);
       scanf("%d",&dizi[i]);
      }
      int aranan;
      printf("hangi sayiyi ariyorsunuz:");
      scanf("%d",&aranan);
      int konum = konumBulma(dizi,N,aranan);

      if(konum){
      printf("%d sayisi %d.konumdadir",aranan,konum);
      }
      else{
      printf("%d sayisi dizide yer almamaktadir!",aranan);
      }

    return 0;
}

