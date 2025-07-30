/*Bir banka için müşteri hesap bilgileri(müşteri adı,
bakiyesi) kaydedilecektir. Kullanıcıdan alınan n sayısına
göre n adet müşteriyi pointer kullanarak oluşturunuz
ve her müşterinin adını ve bakiyesini kullanıcıdan 
alınız. HesapListele fonksiyonunu kullanarak bankadaki
müşterilerin adını ve bakiyesini listeledikten sonra 
tüm müşterilerin toplam bakiyesini yazdırınız.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
char isim[30];
float bakiye;
} musteri;
void hesapListele(musteri *musteriler,int N){
    float toplamBakiye=0;
    printf("\n ----- Musteri listesi----\n");
    for(int i=0; i<N; i++){
        printf("%d.musterinin ismi:%s\t\tBakiyesi:%.2f\n",i+1,musteriler[i].isim,musteriler[i].bakiye);
       toplamBakiye += musteriler[i].bakiye;
    }
    printf("\n toplam bakiye:%.2f\n",toplamBakiye);   
}
int main(){
   int N;
   printf("kac musteri bilgisi girilecek:");
   scanf("%d",&N);

   // yer ayırtma islemi
   musteri *musteriler = (musteri*)malloc(sizeof(musteri)*N);
   if(musteriler == NULL){
    printf("bellek ayirtilamadi\n");
    return 1;
   }
   printf("musterilerin bilgilerini giriniz:\n");
   for(int i=0; i<N; i++){
     printf("%d.Musteri ismi:",i+1);
     scanf("%s", musteriler[i].isim);

     printf("%d.Musteri bakiyesi:",i+1);
     scanf("%f",&musteriler[i].bakiye);
   }
   hesapListele(musteriler,N);

   free(musteriler);


    return 0;
}