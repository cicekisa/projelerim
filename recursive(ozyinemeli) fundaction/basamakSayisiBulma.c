#include <stdio.h>
#include <stdlib.h>
int basamakSayisi(int sayi){
    if(sayi==0)
       return 0;     
    else
        return 1+basamakSayisi(sayi/10);
}
int main(){
   int sayi;
   printf("bir sayi giriniz:");
   scanf("%d",&sayi);
   
   int basamak = basamakSayisi(sayi);
   printf("girilen sayi %d basamaklidir\n",basamak);

    return 0;
}