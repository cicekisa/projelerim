/* Bir şirkette çalışan personeller için adı,maaşı ve
doğum tarihi(yıl,ay,gün) şeklinde bilgiler tutulmaktadır.
 5 personel için bu bilgiler alındıktan sonra yaşı 
25-40 arası olanların adı soyadı,maaşı ve yaşını ekrana
 listeleyiniz.(içiçe struct kullanılmalıdır) */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int gun;
    int ay;
    int yil;
} DogumTarihi;
 
typedef struct {
    char isim[50];
    float maas;
    DogumTarihi  dogumTarihi;
} personel;

// yas hesaplama
int yasHesapla(DogumTarihi dt){
int  yas = 2025 - dt.yil;
return yas;
}
int main(){
   personel personeller[5];
   for(int i=0; i<5; i++){
    printf("%d.personelin bilgilerini giriniz:\n",i+1);
    printf("adi: ");
    scanf("%s",personeller[i].isim);
    printf("maasi:");
    scanf("%.f",&personeller[i].maas);
    printf("dogum tarihi(gun/ay/yil): ");
    scanf("%d%d%d\n",&personeller[i].dogumTarihi.gun,&personeller[i].dogumTarihi.ay,&personeller[i].dogumTarihi.yil);
   }
   printf("\n 25-40 yas arasi personellerin bilgileri:\n");
   printf("ad\t\tMaas\t\tyas\n");
   // yas araligindaki perosnelleri sıralama
   for(int i=0; i<5; i++){
    int yas = yasHesapla(personeller[i].dogumTarihi);
      if(yas>= 25 && yas <= 40){
        printf("%s\t\t%.2f\t\t%2d\n",personeller[i].isim,personeller[i].maas,yas);
      }
   }
    return 0;
}
