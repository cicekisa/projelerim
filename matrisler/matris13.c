/*Girilen N değerine göre NxN matris oluşturup 1’den NxN’e 
 * kadar sayıları aşağıdaki sırayla yerleştiriniz. N=3 
girilirse:
 1 6 7   
 2 5 8
 3 4 9*/
#include <stdio.h>

int main(){ 
    int N;
    int i,j,sayi=1;
    printf("N degerini giriniz:");
    scanf("%d",&N);
    int matris[N][N];
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