/*Girilen sayının faktöriyelini bulan fonksiyon 
yazınız. Fonksiyonda return kullanılmayacak ve 
faktöriyel sonucu main de yazdırılacaktır*/
#include <stdio.h>
#include <stdlib.h>
void faktoryel(int a,int *sonuc){
    *sonuc=1;
    for(int i=1; i<=a; i++){
        *sonuc *=i;
    }
}
int main(){
   int a,sonuc;
   printf("bir sayi giriniz:");
   scanf("%d",&a);
     
    faktoryel(a,&sonuc);
   printf("%d! = %d\n",a,sonuc);
    return 0;
}
