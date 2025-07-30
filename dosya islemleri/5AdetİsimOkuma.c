#include <stdio.h>
void main(){
    FILE *dosya;
    char ad[20];
    dosya = fopen("c:\\isimler.txt","r");
    if(dosya ==NULL)
      printf("surucu veya dosya bulunamadi\n");
          // dosya okuma modunda acılıyor
    else{
        while(!feof(dosya)){
            fgets(ad,20,dosya);
            printf("%s",ad);
        }
        fclose(dosya);
    }      
}
