/* “string.dat” binary dosyasındaki her bir satırdaki 
kelime uzunluğunu satır sonuna yazdırınız. 
Örneğin; 
Ali 3
 Ahmet 5*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   FILE *fptr;
   char isimler[30];
   int i,len;  // len uzunluk aktaracagımız birim
   
   fptr = fopen("string.dat","rb");
   if(fptr == NULL){
     printf("dosya acilmadi!\n");
     return 1;
    }
    FILE *tempFptr;
    tempFptr = fopen("string_ile_lenghs.txt","w");
    if(tempFptr == NULL){
        printf("gecici dosya acilamadi!\n");
        fclose(fptr);
        return 1;
    }
    for(i=0; i<5; i++){
        fread(isimler,sizeof(char),30,fptr);
        len = strlen(isimler);
        fprintf(tempFptr,"%s => %d\n",isimler,len);
    }   
    fclose(fptr);
    fclose(tempFptr);
    
    printf("dosya basariyla islendi ve uzunluklar eklendi \n");
    return 0;
}