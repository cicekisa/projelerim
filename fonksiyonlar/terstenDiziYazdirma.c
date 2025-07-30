#include <stdio.h>
#include <stdlib.h>
void diziYazdir(int dizi[],int es){
     int terstenDizi[es];

    for(int i=es-1; i>=0; i--){
        terstenDizi[i] = dizi[i];
        printf("%d ",dizi[i]);
    }
}

int main(){
   int i,dizi[] = {1,2,3,4,5};
      printf("dizinin elemanlari\n");
    for(int i=0; i<5; i++){
        printf("%d ",dizi[i]);
    }
    printf("\ndizinin tersten yazimi\n");
   diziYazdir(dizi,5);


    return 0;
}