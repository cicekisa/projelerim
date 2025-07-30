#include <stdio.h>
#include <stdlib.h>
int tamBolen(int sayi,int bolen){
    if(bolen>sayi)
    return 0;
    
    if(sayi%bolen==0){
        printf("%d ",bolen);
    }
   return tamBolen(sayi,bolen+1);
}

int main(){
   int sayi;
   printf("bir sayi giriniz:");
   scanf("%d",&sayi);

   printf("girilen sayinin bolenleri\n");
   tamBolen(sayi,1);


    return 0;
}