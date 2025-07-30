/*1-N arası sayıları özyinelemeli olarak yazdıran
 fonksiyonu yazınız.*/
#include <stdio.h>
#include <stdlib.h>
void sayilariYazdirma(int N){
     if(N>0){
       sayilariYazdirma(N-1);
       printf("%d ",N);
    }
   
}


int main(){
   int N;
   printf("N degerini giriniz:");
   scanf("%d",&N);
   
   sayilariYazdirma(N);

    return 0;
}