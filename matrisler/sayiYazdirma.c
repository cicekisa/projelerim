

#include <stdio.h>

int main(){
    int N,i,j;
    

    printf("N degerini giriniz:");
    scanf("%d",&N);
    int matris[N][N];
    
    int sayi=1;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
          matris[i][j] = sayi;
          sayi++;
        }
    }

   printf("matrisin elemanlari\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%5d",matris[i][j]);
        }
        printf("\n");
    }



    return 0;
} 