/*Bir şirkette çalışan personeller için adı,maaşı ve
doğum tarihi(yıl,ay,gün) şeklinde bilgiler tutulmaktadır.
 5 personel için bu bilgiler alındıktan sonra yaşı 
25-40 arası olanların adı soyadı,maaşı ve yaşını ekrana
 listeleyiniz.(içiçe struct kullanılmalıdır)

kullanıcıdan doğum tarihi ve şimdiki tarihi gün,ay,yıl 
şeklinde ayrı ayrı aldıktan sonra her iki tarih verisini YasHesapla 
isimli fonksiyona göndererek kullanıcının yaşını gün,ay,yıl 
olarak yazdırınız */

#include <stdio.h>

typedef struct{
 int gun;
 int ay;
 int yil;
}DogumTarihi;

typedef struct{
  char adi[50];
  float maas;
  DogumTarihi dogumTarihi;
}personel;



void yasHesapla(DogumTarihi dogum,DogumTarihi simdi,int *yil,int*ay,int*gun){
  if(dogum.ay > simdi.gun){
    simdi.gun += 30;
    simdi.ay -=1;
  }
  *gun = simdi.gun - dogum.gun;

  if(dogum.ay > simdi.ay){
    simdi.ay +=12;
    simdi.yil -=1;
  }
    *ay = simdi.ay - dogum.ay;
    *yil = simdi.yil - dogum.yil;
  }
  


int main(){
  personel personeller[2];
  DogumTarihi y; // bugunun tarihi
  printf("bugunun tarihini giriniz: ");
  scanf("%d %d %d",&y.gun,&y.ay,&y.yil);

  for(int i=0; i<2; i++){
    printf("%d. personel bilgilerini giriniz:\n",i+1);
    printf("adi: ");
    scanf("%s",personeller[i].adi);
    printf("maasi: ");
    scanf("%f",&personeller[i].maas);
    printf("dogum Tarihi(gun/ay/yil): ");
    scanf("%d %d %d",&personeller[i].dogumTarihi.gun,&personeller[i].dogumTarihi.ay,&personeller[i].dogumTarihi.yil);
  }
  printf("25-40 yas arasi personeller:\n");
  printf("ad\tMaas\t\tyas\n");
  for(int i=0; i<2; i++){
  int yil,a,g;
  
  yasHesapla(personeller[i].dogumTarihi,y,&yil,&a,&g);

  
  //  int yas = yasHesapla(personeller[i].dogumTarihi);
    if(yil >=25 && yil <=40){
      printf("%s\t%.2f\t\t%d/%d/%d\n",personeller[i].adi,personeller[i].maas,yil,a,g);
    }
  }
  return 0;
}
