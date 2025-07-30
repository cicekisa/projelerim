/* 5 öğrenci için kullanıcıdan alınan Ad, Vize ve Final notlarını “Notlar.txt” dosyasına yazdırınız. 
Notlar.txt örnek içeriği:
 Abc  40   30
abc   65   80
xyz   90   70 
def   20   25
xy    55   65
*/
#include <stdio.h>
int main(){
   FILE *fptr;
   char isim[30];
   int vize,final,i;

   //notlar.txt dosyasini yazma modunda aciyoruz
   fptr = fopen("notlar.txt","w");
   if(fptr ==NULL){
    printf("dosya acilmadi!\n");
    return 1;
   }
   // 5 ogr bilgileri
   for(i=0; i<2; i++){
    printf("%d.ogrencinin adini giriniz:",i+1);
    scanf("%s",isim);
    printf("%d.ogrencinin vize notu gir:",i+1);
    scanf("%d",&vize);
    printf("%d.ogrencinin final notu gir:",i+1);
    scanf("%d",&final);
   
     fprintf(fptr,"%s%6d%9d\n",isim,vize,final);
   }   
   fclose(fptr);
   printf("ogrencilerin bilgileri 'notlar.txt' dosyasina aktarilmistir");
    return 0;
}