/*isim,soyisim,yas ve okulNo bilgilerini isteyen programı yaziniz 
bilgiler.txt dosyasina aktariniz*/
#include <stdio.h>


int  main(){
    FILE *dosya;
    char isim[30],soyisim[30],okul[100];
    int okulNo,yas;
    dosya = fopen("bilgiler.txt","w");
    if(dosya ==NULL){
      printf("dosya acilamadi");
      return 1;
    }
    else{
    // kullanıcıdan bilgileri alma islemleri
   printf("isim: ");
   scanf("%s",&isim);
   printf("soyisim: ");
   scanf("%s",&soyisim);
   printf("yas: ");
   scanf("%d",&yas);
   printf("okul: ");
   scanf("%s",&okul);
   printf("okulNo: ");
   scanf("%d",&okulNo);
 
   // bilgileri dosyaya yazdirma islemleri
   fprintf(dosya,"isim:%s\n",isim);
   fprintf(dosya,"soyisim:%s\n",soyisim);
   fprintf(dosya,"yas:%d\n",yas);
   fprintf(dosya,"okul:%s\n",okul);
   fprintf(dosya,"okulNo:%d\n",okulNo);
    }
    fclose(dosya);
    printf("bilgiler dosyaya aktarildi\n");
}