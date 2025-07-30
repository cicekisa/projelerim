#include <stdio.h>
#include <time.h>

int main(){
   int i,j,N,sayi=1; 
   int matris[N][N];
    printf("N degerini giriniz:");
    scanf("%d",&N);
   for(j=0; j<N; j++){
     if(j%2==0){
       for(i=0; i<N; i++){
          matris[i][j] = sayi++;
        }
     }
     else{
        for(i=N-1; i>=0; i--){
            matris[i][j] = sayi++;
        }
     }
   }
  
   printf("olusturulan matris\n");
   for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%2d ",matris[i][j]);
        }
      printf("\n");
   }

    return 0;
}
