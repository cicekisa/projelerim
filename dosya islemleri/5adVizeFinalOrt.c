/* 5 öğrenci için kullanıcıdan alınan Ad, Vize ve Final notlarını “Notlar.txt” dosyasına yazdırınız. 
Notlar.txt örnek içeriği:
 Abc  40   30  34
abc   65   80  74
xyz   90   70  78
def   20   25  23
xy    55   65  41,5
*/
#include <stdio.h>
int main(){
   FILE *fptr;
   char isim[30];
   int vize,final,i;
   float ort;
   //notlar.txt dosyasini yazma modunda aciyoruz
   fptr = fopen("notlar.txt","w");
   if(fptr ==NULL){
    printf("dosya acilmadi!\n");
    return 1;
   }
   // 5 ogr bilgileri
   for(i=0; i<5; i++){
    printf("%d.ogrencinin adini giriniz:",i+1);
    scanf("%s",isim);      // dizi oldugu icin & isareti konulmadı
    printf("%d.ogrencinin vize notu gir:",i+1);
    scanf("%d",&vize);
    printf("%d.ogrencinin final notu gir:",i+1);
    scanf("%d",&final);
   
    ort = final*(0.6) + vize*(0.4);
     fprintf(fptr,"%3s %6d %9d %7.2f\n",isim,vize,final,ort);
   }   
   fclose(fptr);
   printf("ogrencilerin bilgileri 'notlar.txt' dosyasina aktarilmistir");
    return 0;
}