#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void notHesaplama(int vize,int final,float *ort,char *harfNotu,char *durum){
     *ort = (vize*0.4) + (final*0.6);
      if(*ort >=85  &&  *ort <= 100){
       strcpy(harfNotu,"AA");
       strcpy(durum,"gecti");
     }
     else if(*ort >=70  &&  *ort <= 84){
      strcpy(harfNotu,"BB");
      strcpy(durum,"gecti");
    }
    else if(*ort >=55  &&  *ort <= 69){
      strcpy(harfNotu,"CC");
      strcpy(durum,"gecti");
    }
    else if(*ort >=45  &&  *ort <= 54){
      strcpy(harfNotu,"DD");
      strcpy(durum,"kaldi");
    }
    else{
      strcpy(harfNotu,"FF");
      strcpy(durum,"kaldi");
    }
}
     int main(){
   FILE *fptr,*fptr2;
   char isim[30],harfNotu[3],durumu[6];
   int vize,final,i;
   float ort;

   //notlar.txt dosyasini yazma modunda aciyoruz
   fptr = fopen("notlar.txt","r");
   fptr2 = fopen("isaSonuclar.txt","w");
   if(fptr == NULL || fptr2  == NULL){
    printf("dosya acilmadi!\n");
    return 1;
   }
   // 5 ogr bilgileri
   while(fscanf(fptr, "%s %d %d",isim,&vize,&final) !=EOF){
    notHesaplama(vize,final,&ort,harfNotu,durumu);
    fprintf(fptr2,"%s %d %d %.2f %s %s\n",isim,vize,final,ort,harfNotu,durumu);
   }
   
   fclose(fptr);
   fclose(fptr2);
   printf("ogrencilerin bilgileri 'isaSonuclar.txt' dosyasina aktarilmistir");
    return 0;
}
 
 