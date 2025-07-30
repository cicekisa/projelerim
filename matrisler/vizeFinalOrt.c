#include <stdio.h>
int main(){
   int i;
   float matris[5][4];
   printf("ogrencilerin vize ve final notunu giriniz:\n");
   for(i=0; i<5; i++){
    printf("ogrenci %d:",i+1);
   scanf("%f %f",&matris[i][1],&matris[i][2]);
    matris[i][0] = i+1;
    matris[i][3] = matris[i][1]*0.4 + matris[i][2]*0.6;
    printf("\n");
   }

   printf("ogrenci no | vize notu | final notu | ortalama\n");
   printf(" ----------|-----------|------------|---------\n");
    for(i=0; i<5; i++){
        printf("%10.0f %9.0f %10.0f  %10.2f\n",matris[i][0],matris[i][1],matris[i][2],matris[i][3]);
    }


    return 0;
}