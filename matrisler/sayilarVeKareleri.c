/* 1’den 10’a kadar olan sayıları ve karelerini matris
 olarak oluşturup yazdırınız.(1.sütunda sayılar, 
2.sütunda kareleri olacaktır)
 1   <==>   1
 2   <==>   4
 3   <==>   9
 4   <==>  16
 5   <==>  25      <= seklin çıktısı bu sekil olacak
 6   <==>  36
 7   <==>  49
 8   <==>  64
 9   <==>  81
10   <==> 100
*/ 
#include <stdio.h>
#include <time.h>

int main(){
   int matris[10][2];
   int i,j;


   for(i=0; i<10; i++){
       matris[i][0] = i+1;
       matris[i][1] = (i+1)*(i+1);
           
   }
    printf("sayi  karesi\n");
   for(i=0; i<10; i++){
        printf("%2d   <==> %3d\n",matris[i][0],matris[i][1]);
   } 
    return 0;
}