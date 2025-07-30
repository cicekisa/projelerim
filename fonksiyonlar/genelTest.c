#include <stdio.h>
#include <stdlib.h>
int faktoryel(int a){
    int i,sonuc=1; 
    for(i=1; i<=a; i++){
       sonuc *=i;
       if(a==i)
       printf("%d! = %d\n",i,sonuc);
    }
   return sonuc;
}
int gucluSayiMi(int b){
    int orijinalSayi = b;
    int basamak=0,toplam=0;
    while(b>0){
    basamak = b%10;
    toplam += faktoryel(basamak);
    b /=10;
    }
    return (toplam==orijinalSayi);
}
int main(){
   int sayi;

   printf("bir sayi giriniz:");
   scanf("%d",&sayi);
   
   if(gucluSayiMi(sayi))
   printf("%d sayisi guclu sayidir\n",sayi);
   
   else
   printf("%d sayisi guclu sayi degildir\n",sayi);


    return 0;
}