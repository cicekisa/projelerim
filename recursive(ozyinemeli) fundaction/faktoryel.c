/* Girilen sayının faktöriyelini özyinelemeli 
fonksiyon ile bulunuz.*/
#include <stdio.h>
#include <stdlib.h>
int faktoryelRecursive(int sayi){
    if(sayi>0){
       return sayi*faktoryelRecursive(sayi-1);
    }
    else{
        return 1;
    }
}

int main(){
   int sayi;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);

    int sonuc = faktoryelRecursive(sayi);
    printf("%d! =%d\n",sayi,sonuc);
    return 0;
}