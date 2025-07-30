/* Bir sınıftaki 10 öğrenci için öğrenci no,vize ve
 final notları tutulacaktır. Bu işlem için dizinin
her bir elemanında öğrencinin numarası,vize
ve final notu olacak şekilde 10 elemanlı bir dizi 
oluşturulup değerleri kullanıcıdan alınacak ve bu dizi 
NotHesapla fonksiyonuna gönderilip her öğrencinin
ortalaması ve öğrenci numarası, ayrıca sınıfın
genel not ortalaması ekrana yazdırılacaktır.*/
#include <stdio.h>

struct ogrenci{
    int ogrenciNo;
    float vizeNotu;
    float finalNotu;
};

void notHesaplama(struct ogrenci ogrenciler[],int es){
    float Gano = 0.0;
    for(int i=0; i<es; i++){
        float ort = (ogrenciler[i].vizeNotu*0.4) + (ogrenciler[i].finalNotu*0.6);
        printf("ogrenci no:%d , ortalama:%.2f\n",ogrenciler[i].ogrenciNo,ort);
        Gano +=ort;
    }
    Gano /= es;
    printf("sinifin GANO'su: %.2f\n",Gano);
}
int main(){
     int es=2;
   struct ogrenci ogrenciler[es];
  
   for(int i=0; i<es; i++){
    printf("%d.ogrenci no: ",i+1);
    scanf("%d",&ogrenciler[i].ogrenciNo);
    printf("%d.vize notu: ",i+1);
    scanf("%f",&ogrenciler[i].vizeNotu);
    printf("%d.final notu:",i+1);
    scanf("%f",&ogrenciler[i].finalNotu);
   }
   notHesaplama(ogrenciler,es);

    return 0;
}
