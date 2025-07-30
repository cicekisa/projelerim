#include <stdio.h>
#include <stdlib.h>

int basamakBulma(int sayi){
    int sayac=0;
    if(sayi==0)
    return 1;
    while(sayi !=0){
        sayi /=10;
        sayac++;
    }
    return sayac;
}
int main(){
   int sayi;
   printf("bir sayi giriniz:");
   scanf("%d",&sayi);

   int basamakSayisi = basamakBulma(sayi);
   printf("girilen %d sayisinin %d basamagi vardir",sayi,basamakSayisi);

    return 0;
}