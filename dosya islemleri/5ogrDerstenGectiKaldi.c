/* 5 öğrenci için kullanıcıdan alınan Ad, Vize ve Final notlarını “Notlar.txt” dosyasına yazdırınız. 
Notlar.txt örnek içeriği:
 Abc  40   30  34
abc   65   80  74
xyz   90   70  78
def   20   25  23
xy    55   65  41,5
*/
#include <stdio.h>
#include <string.h>
void notHesaplama(int vize,int final,float *ort,char *harfNotu,char *durumu){
    *ort =(vize*0.4)+(final*0.6);
     
    if(*ort >=85 && *ort<=100){
        strcpy(harfNotu,"AA");
        strcpy(durumu, "Gecti");
    }
    else if(*ort>=70 && *ort<=84){
        strcpy(harfNotu,"BB");
        strcpy(durumu, "Gecti");
    }
    else if(*ort>=55 && *ort<=69){
        strcpy(harfNotu,"CC");
        strcpy(durumu, "Gecti");
    }
    else if(*ort>=45 && *ort<=54){
        strcpy(harfNotu,"DD");
        strcpy(durumu, "kaldi");
    }
    else{
        strcpy(harfNotu,"FF");
        strcpy(durumu, "kaldi");
    }  
}
int main(){
   FILE *fptr, *fptr2;
   char isim[30],harfNotu[6],durumu[2];
   int vize,final;
   float ort;
   //notlar.txt dosyasini okuma modunda aciyoruz
   fptr = fopen("notlar.txt","r");
   fptr2 = fopen("sonuclar.txt","w");
   if(fptr ==NULL || fptr2 == NULL){
    printf("dosya acilmadi!\n");
    return 1;
   }
   while(fscanf(fptr,"%s %d %d", isim,&vize,&final) !=EOF){
    notHesaplama(vize,final,&ort,harfNotu,durumu);
    fprintf(fptr2, "%s %d %d %.2f %s %s\n",isim,vize,final,ort,harfNotu,durumu);
   }
   fclose(fptr);
   fclose(fptr2);
   printf("ogrencilerin bilgileri 'sonuclar.txt' dosyasina aktarilmistir");
    return 0;
}

