/* Verilen 2 sayıdan büyük olan sayı küçük sayıya 
bölünerek bölüm ve kalanı bulan fonksiyonu yazınız. 
(Sayıları alma ve bölüm/kalan sonuçları yazdırma
 işlemleri “main” içinde yapılacaktır.)*/
#include <stdlib.h>
#include <stdio.h>
int bolum(int *a,int *b){
   int bolum=0;
   if(*a>*b)
     bolum = *a / *b;
   else
     bolum = *b / *a;
   return bolum;
}
int kalan(int *a,int *b){
   int kalan=0;
   if(*a>*b)
    kalan = *a % *b;
   else
     kalan = *b % *a;
   return kalan;
}

int main(){
   int *a = (int*)malloc(sizeof(int));
   int *b = (int*)malloc(sizeof(int));
   
   printf("2 sayi giriniz:");
   scanf("%d%d",a,b);
   
   int sonuc1 = bolum(a,b);
   printf("buyuk sayiyi kucuk sayiya bolumu:%d\n",sonuc1);
   int sonuc2 = kalan(a,b);
   printf("girilen sayilarin bolumu sonucundaki kalan:%d\n",sonuc2);


    return 0;
}