#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *fptr;
    fptr = fopen("random.txt","w");
    int number;
    if(fptr==NULL){
       printf("dosya acma islemi basarisiz!\n");
       return 1;
    }
    else{
        srand(time(0));
        for(int i=0; i<10; i++){
            for(int j=0; j<5;j++){
                number = rand()%101;
                fprintf(fptr, "%d ",number);
            }
            fprintf(fptr,"\n");
  
    }
    fclose(fptr);
     printf("dosya basarili calisiyor\n");
    }
     return 0;
}