#include <stdio.h>

int main(){
   int i,j,sayi=1,N;
   printf("N degerini giriniz:");
   scanf("%d",&N);
 
   for(i=1; i<=N; i++){
    for(j=1; j<=i; j++){
        printf("%3d",sayi);
        sayi++;
    }
    printf("\n");
   }

    return 0;
}