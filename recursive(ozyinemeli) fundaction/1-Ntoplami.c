/* 1-N arası sayıların toplamını özyinelemeli olarak 
bulunuz.*/
#include <stdio.h>
#include <stdlib.h>
int toplamMi(int sayi){
    if(sayi==0)
    return 0;
    else{
        return sayi+ toplamMi(sayi-1);
    }
}

int main(){
    int sayi;
         printf("bir sayi giriniz:");
         scanf("%d",&sayi);
   
     int sonuc = toplamMi(sayi);
     printf("1-%d arasindaki sayilarin toplami:%d",sayi,sonuc);    


    return 0;
}