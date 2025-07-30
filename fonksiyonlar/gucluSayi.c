/* Girilen sayının Güçlü Sayı olup olmadığını
 tanımladığınız faktöriyel fonksiyonunu kullanarak
  bulunuz.(Güçlü Sayı: basamak değerlerinin 
faktöriyellerinin toplamına eşit olan sayı 145=1!+4!+5!)
*/
#include <stdio.h>
#include <stdlib.h>
int faktoryelBulma(int sayi){
    int i,sonuc=1;
    for(i=1; i<=sayi; i++){
        sonuc *=i;
        if(sayi==i)
        printf("%d! = %d\n",sayi,sonuc);
    }
    return sonuc;
}
int gucluSayiMi(int sayi){
    int orijinalSayi = sayi;
   int basamak=0,toplam=0;
   while(sayi>0){
    basamak =sayi%10;
    toplam += faktoryelBulma(basamak);
    sayi /=10;
  
   }
   return (toplam==orijinalSayi);
}

int main(){
   int sayi;
   printf("bir sayi giriniz:");
   scanf("%d",&sayi);

    if(gucluSayiMi(sayi))
      printf("%d girilen sayi guclu sayidir\n",sayi);
    
    else
    printf("%d girilen sayi guclu sayi degildir",sayi);
  
  return 0;
}