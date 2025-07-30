/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *fptr;
    int i,j,num;

    fptr = fopen("random.txt","w");
    if(fptr==NULL){
       printf("dosya acma islemi basarisiz!\n");
       return 1;
    }
    srand(time(0));
      for(i=0; i<10; i++){
        for(j=0; j<5;j++){
                num = rand()%101;
                fprintf(fptr, "%d ",num);
        }
            fprintf(fptr,"\n");
      }
    fclose(fptr);
    printf("dosya basarili calisiyor\n");
    
    FILE *fptr_read = fopen("random.txt","r");
    FILE *fptr_tek = fopen("tekSayilar.txt","w");
    FILE *fptr_cift = fopen("ciftSayilar.txt","w");

    if(fptr == NULL || fptr_tek == NULL || fptr_cift == NULL){
        printf("dosya acilamadi!\n");
        return 1;
    }
    while(fscanf(fptr_read,"%d",&num) !=EOF){
        if(num%2 == 0)
           fprintf(fptr_cift,"%d ",num);
        else{
            fprintf(fptr_tek,"%d ",num);
           }
    }
    fclose(fptr_cift);
    fclose(fptr_read);
    fclose(fptr_tek);

    printf("islem tamamlandi sayilar dosyalarina gore ayirildi\n");
     return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() { 
  FILE *fptr,*readFptr,*tekSayilarFile,*ciftSayilarFile;
  int i,j,sayilar;
  fptr = fopen("random.txt","w");
  if(fptr == NULL){
     printf("dosya acilamadi!\n");
    return 1;   
  }
  srand(time(0));
       for(i=0; i<10; i++){
          for(j=0; j<5; j++){
             sayilar = rand()%101;
             fprintf(fptr,"%d ",sayilar);
          }
        fprintf(fptr,"\n");
       }
  fclose(fptr);
  printf("dosya basarili calisiyor\n");
  
  // dosyalari yazma modunda aciyoruz fptr yi de okuma modunda
  if((readFptr = fopen("random.txt","r")) == NULL ||
   (tekSayilarFile = fopen("teksayilar1.txt","w")) == NULL  ||
  (ciftSayilarFile = fopen("ciftSayilar1txt.","w")) == NULL ) {
    printf("dosya aciliamadi!\n");
    return 1;
  }
  while(fscanf(readFptr,"%d",&sayilar) !=EOF){
      if(sayilar %2 ==0)
        fprintf(ciftSayilarFile,"%d\n",sayilar);

     else
      fprintf(tekSayilarFile,"%d\n",sayilar);
  }
  fclose(readFptr);
  fclose(tekSayilarFile);
  fclose(ciftSayilarFile);
  printf("sayilar dosyalara aktarildi!\n");

   return 0;
}