#include <stdio.h>
/*Kullanıcıdan alınan 5 adet sayıyı txt dosyasına
 alt alta olacak şekilde yazdırınız.*/
int main(){
     FILE *dd;
     int i;
     char ad[20];
      if((dd=fopen("isimler.txt","w")) == NULL){
       // dosya, yazma modunda açılıyor
          printf("sonuc bulunamadi!\n");
           return 1; 
       }
      else{
           for(i=1; i<=5; i++){
            printf("%d.adi giriniz:",i);
            fgets(ad,20, stdin);
            fputs(ad,dd);
           }
           fclose(dd);
           printf("isimler dosyaya aktarildi\n");
       }
      //  if((dd=fopen("c:\\isimler.txt","r")) == NULL)
       // dosya, yazma modunda açılıyor
      //    printf("sonuc bulunamadi!\n");
      
    return 0;

}