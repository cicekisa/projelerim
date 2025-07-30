#include <stdio.h>
#include <stdlib.h>

int main() { 
  FILE *fptr;
  int i,j;
  fptr = fopen("isa.txt","w");
  if(fptr == NULL){
     printf("dosya acilamadi!\n");
    return 1;   
  }
    for(i=1; i<=8; i++){
      for(j=i; j<i+3; j++){
        fprintf(fptr,"%d\t",j);
      }
      fprintf(fptr,"\n");
    }
    fclose(fptr);
    printf("dosyaya basarili bir sekilde aktarildi!\n");

  fptr = fopen("isa.txt","r");
  if(fptr == NULL){
    printf("dosya bulunamadi!\n");
    return 1;
  }
  char sayilar[256];  // metin belgesi oldugu icin char tipini kullandik binary olsaydi int turunde yazardik ona gore
   while(fgets(sayilar,sizeof(sayilar),fptr) !=NULL){  // metin dosyasinda satir satir okuyoruz 
   printf("%s",sayilar);
  }
   fclose(fptr);
   printf("dosya islemi basariyla tamamlandi!\n");

   return 0;
}