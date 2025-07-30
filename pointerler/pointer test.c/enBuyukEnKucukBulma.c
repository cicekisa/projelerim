/* Parametre olarak verilen 3 sayıdan en büyük ve en
 küçüğünü bulan fonksiyonu yazınız. En büyük ve 
en küçük sayıları main içinde yazdırınız.*/
#include <stdio.h>
#include <stdlib.h>
int enBuyukEnKucuk(int a,int b,int c,int *enBuyuk,int *enKucuk){
     if(a>b && a>c)
        *enBuyuk=a;
    else if(b>a && b>c)
        *enBuyuk = b;
    else{
        *enBuyuk = c;
    }// En kucuk sayi
    if(a<b && a<c)
        *enKucuk = a;
    else if(b<a && b<c)
        *enKucuk = b;
    else{
        *enKucuk = c;
    }
}
int main(){
    int a,b,c;
    printf("uc sayi giriniz:");
    scanf("%d%d%d",&a,&b,&c);
    int enBuyuk=0;
    int enKucuk=0;
    enBuyukEnKucuk(a,b,c,&enBuyuk,&enKucuk);
    printf("en buyuk deger:%d\n",enBuyuk);
    printf("en kucuk deger %d\n",enKucuk); 

    return 0;
}
