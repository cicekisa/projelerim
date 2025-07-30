/* Kullanıcıdan saat, dakika ve saniye olarak ayrı
ayrı girilen iki zaman arasındaki farkı yine saat,
dakika ve saniye cinsinden bulup ekrana yazdırınız.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct zaman{
    int saat;
    int dakika;
    int saniye;
};
int main(){
    struct zaman x;
    struct zaman y; 
   
    printf("hesaplama istediginiz saati giriniz:");
    scanf("%d%d%d",&x.saat,&x.dakika,&x.saniye);

    printf("simdiki saati giriniz:");
    scanf("%d%d%d",&y.saat,&y.dakika,&y.saniye);
    if(x.saniye>y.saniye){
        y.saniye +=60;
        y.dakika -=1;
    }
    if(x.dakika>y.dakika){
        y.dakika +=60;
        y.saat -=1;
    }
    printf("aradaki saat farki => %d saat,%d dakika,%d saniye",y.saat-x.saat,y.dakika-x.dakika,y.saniye-x.saniye);

   return 0;
}



