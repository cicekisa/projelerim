#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *fptr;
    fptr = fopen("random.txt","w");
     int number[10][5],num;
    if(fptr==NULL){
       printf("dosya acma islemi basarisiz!\n");
       return 1;
    }
    else{
        srand(time(0));
        for(int i=0; i<10; i++){
            for(int j=0; j<5;j++){
                num = rand()%101;
                number[i][j] = num;
                fprintf(fptr, "%d ",num);
            }
            fprintf(fptr,"\n");
    }
    fclose(fptr);
    
    fptr = fopen("randomNumberEnBuyuk.txt","w");
   
        for(int i=0; i<10; i++){
            int max = number[i][0]; // bunun nedeni her satirin basına gecince tekrar en bastaki degeri en buyuk alsın ve diger karakteri karsilastirsin
            for(int j=0; j<5; j++){
                fprintf(fptr,"%d ",number[i][j]);
                if(number[i][j]>max)
                  max = number[i][j];
            }
            fprintf(fptr, "==>%3d\n",max);
        }
        fclose(fptr);
        printf("dosya basarili calisiyor\n");
    }
     return 0;
}