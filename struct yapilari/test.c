/* Bir banka için müşteri hesap bilgileri(müşteri adı,bakiyesi)
 kaydedilecektir. Kullanıcıdan alınan n sayısına göre n adet 
müşteriyi pointer kullanarak oluşturunuz ve her müşterinin adını
 ve bakiyesini kullanıcıdan alınız. HesapListele fonksiyonunu 
kullanarak bankadaki müşterilerin adını ve bakiyesini listeledikten
 sonra tüm müşterilerin toplam bakiyesini yazdırınız.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char isim;
    float bakiye;
}musteri;

void hesapListele(musteri *musteriler,int N){
    float toplamBakiye =0;
    printf("\n------Musteri Listesi----\n");
    for(int i=0; i<N; i++){
        printf("%d.musteri ismi:%s\t Bakiyesi:%.2f\n",i+1,musteriler[i].isim,musteriler[i].bakiye);
        toplamBakiye += musteriler[i].bakiye;
    }
    printf("\ntoplam bakiye: %.2f\n",toplamBakiye);

}

int main(){
   int N;

   printf("kac adet musteri bilgisi girilecek: ");
   scanf("%d",&N);

      musteri *musteriler = (musteri*)malloc(sizeof(musteri)*N);
      if(musteriler == NULL){
        printf("bellek ayirtilamadi\n");
        return 1;
      }

   for(int i=0; i<N; i++){
     printf("%d.musteri bilgilerini giriniz:\n",i+1);
     printf("musteri adi:");
     scanf("%s",musteriler[i].isim);
    
     printf("musteri bakiyesi: ");
     scanf("%f",&musteriler[i].bakiye);  
    }
    hesapListele(musteriler,N);

    free(musteriler);

    return 0;
}
