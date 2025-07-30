#include <stdio.h>
#include <time.h>

int main(){
int matris[4][4];
int i,j,kosegen1=0,kosegen2=0;

srand(time(0));
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            matris[i][j] = rand()%11;
        }
    }
    printf("matrisin orijinali\n");
     for(i=0; i<4; i++){
        for(j=0; j<4; j++){
           printf("%2d ",matris[i][j]);
        }
        printf("\n");
    }
     for(i=0; i<4; i++){
          int temp = matris[i][i];
           matris[i][i] = matris[i][4-i-1];
           matris[i][4-i-1] = temp;
    }
    printf("\n\nkosegenleri yerdegistirilmis matris\n");
     for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%2d ",matris[i][j]);
           
        }
     
        printf("\n");
    }

    return 0;
}