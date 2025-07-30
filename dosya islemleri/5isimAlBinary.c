#include <stdio.h>
#include <stdlib.h>


int main(){
   FILE *fptr;
   char isimler[5][30];
   int i;

   printf("lutfen isimleri giriniz:\n");
   for(i=0; i<5; i++){
    printf("%d.ismi giriniz:",i+1);
    scanf("%29s",isimler[i]); // en fazla 29 karakter okunacak
   }
   // 2 li dosya ac
   fptr = fopen("string.dat","wb");
   if(fptr == NULL){
     printf("dosya olusturulamadi!\n");
     return 1;
   }
   for(i=0; i<5; i++){                          // hemen alttaki anlatim cok degerli
      fwrite(isimler[i],sizeof(char),30,fptr); // fwrite(dizi,byt cinsinde degeri(int,char gibi),en fazla aranacak karakteri,aktarilacak dosyanın ismi);
    }
    fclose(fptr);
    printf("isimler binary dosyasina aktarildi\n");

    return 0;
}
