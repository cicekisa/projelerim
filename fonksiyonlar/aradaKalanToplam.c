/* Parametre olarak gönderilen iki sayı arasında kalan sayıların toplamını döndüren fonksiyonu yazınız.*/
#include <stdio.h>
#include <stdlib.h>
int toplam(int a,int b){
    int i,sonuc=0;
    for(i=a; i<=b; i++){
        sonuc +=i; 
    }
    return sonuc;
}


int main(){
    int a,b;
    printf("a ve b degerlerrini giriniz:");
    scanf("%d%d",&a,&b);

    int toplam1 = toplam(a,b);
    printf("toplam:%d",toplam1);

    return 0;
}