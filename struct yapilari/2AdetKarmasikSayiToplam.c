/*Kullanıcıdan gerçel ve sanal değerleri alınan 2 karmaşık sayı parametre olarak ComplexAdd fonksiyonuna 
gönderilecek ve toplam sonucu karmaşık sayı tipinde döndürülüp main’de yazdırılacaktır.*/
#include <stdio.h>

struct complex{
   float gercel;
   float sanal;
};

void yazdir(struct complex sayi){
    printf("karmasik sayi:%.1f + %.1f i\n",sayi.gercel,sayi.sanal);
}
struct complex topla(struct complex a,struct complex b){
    struct complex toplam;
    toplam.gercel = a.gercel + b.gercel;
    toplam.sanal = a.sanal + b.sanal;
    return toplam;
}
int main(){
    struct complex sayi1,sayi2,toplam;
    printf("1.complex sayinin gercel kismini giriniz:");
    scanf("%f",&sayi1.gercel);
    printf("1.complex sayinin sanal kismini giriniz:");
    scanf("%f",&sayi1.sanal);
    printf("2.complex sayinin gercel kismini giriniz:");
    scanf("%f",&sayi2.gercel);
    printf("2.complex sayinin sanal kismini giriniz:");
    scanf("%f",&sayi2.sanal);

    toplam = topla(sayi1,sayi2);

    printf("copmlex sayini toplami:%.2f + %.2fi\n",toplam.gercel,toplam.sanal);
    return 0;

}