/*Bir dikdörtgen için uzun ve kısa kenarın tutulduğu
 bir struct tanımlayınız. Kullanıcıdan alınan kenar 
değerlerine göre bir dikdörtgen oluşturup Hesapla
fonksiyonuna göndererek alanını ve çevresini hesaplayınız*/
#include <stdio.h>

struct dikdortgen{
    float uzunkenar;
    float kisakenar;
};

  float alanHesaplama(struct dikdortgen d){
     return d.uzunkenar * d.kisakenar;
  }
   float cevreHesaplama(struct dikdortgen d){
    return 2*(d.uzunkenar + d.kisakenar);
   }
int main(){
    struct dikdortgen d;
    
     printf("uzun kenarin uzunlugunu giriniz: ");
     scanf("%f",&d.uzunkenar);
     
     printf("kisa kenarin uzunlugunu giriniz: ");
     scanf("%f",&d.kisakenar);
     if(d.uzunkenar<d.kisakenar){
        printf("hatali girdiniz uzunkenar kisakenardan daha buyuk olmali");
        return 1;
     }
    printf("diktorgenin  alani:%.2f\n",alanHesaplama(d));
    printf("dikdortgenin cevresi:%.2f",cevreHesaplama(d)); 
   
    return 0;
}