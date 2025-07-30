#include <stdio.h>

int main(){
   int i,j,N;
   
   printf("N degerini giriniz:");
   scanf("%d",&N);

   for(i=1; i<N; i++){
      for(j=1; j<N-i; j++){
        printf(" ");
      }
      for(j=0; j<i; j++){
        printf("* ");
      }
      printf("\n");
   }
    return 0;
}