#include <stdio.h>
#include <time.h>
int main(){
   int matris[4][4];
   int i,j,K1toplam=0,K2toplam=0;
  
  srand(time(0));
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
          matris[i][j] = rand()%10;
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
          printf("%d ",matris[i][j]);
       
       if(i==j){
        K1toplam += matris[i][j];
       }
       if(i+j==3)
       K2toplam += matris[i][j];
        }
        printf("\n");
    }
    printf("1.koseegenin toplami:%d\n",K1toplam);
    printf("2.kosegenin toplami:%d",K2toplam);





    return 0;
}