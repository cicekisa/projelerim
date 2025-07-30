//fonksiyonlar test

#include <stdio.h>
int aradaKalan(int a,int b){
 int toplam=0; 
    for(int i=a+1; i<b; i++){
       toplam +=i;
    }
    return toplam;
}
int main(){
   int a,b;
   if(a<b){
   printf(a ve b sayilarini giriniz:);
   scanf("%d%d",&a,&b);
   }
   int toplam = aradaKalan(a,b);

   printf("arada kalan sayilari toplami:%d",toplam);


    return 0;
}