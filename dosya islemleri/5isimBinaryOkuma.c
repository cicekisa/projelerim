#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    char isimler[30];
    int i;

    // binary dosyayı okuma modunda acma
    fptr = fopen("string.dat","rb");
    if(fptr == NULL){
        printf("dosya bulunamadi\n");
        return 1;
    }
   // dosyayı satır satır okuma islemi
   printf("dosyadaki isimler:\n");
   for(i=0; i<5; i++){
    fread(isimler,sizeof(char),30,fptr);
    printf("%d.isim:%s\n",i+1,isimler);
   }
   fclose(fptr);

    return 0;
}
