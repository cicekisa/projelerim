/*Girilen N değerine göre 1-N arasındaki tüm
 sayıların faktöriyelini bulan programı yazınız
 (faktöriyel fonksiyonunu kullanarak)*/
#include <stdio.h>
int faktoryel(int sayi){
    int i,sonuc =1;
    for(i=1; i<=sayi; i++){
       sonuc *=i;
    }
  return sonuc;
}
int main(){
    int sayi;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);

  int sonuc = faktoryel(sayi);
   printf("%d! = %d\n",sayi,sonuc);
   
    return 0;
}
