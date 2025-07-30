#include <stdio.h>
#include <stdlib.h>
int harfSayisi(char metin[],char aranan){
    int i,harfSayac=0;
     for(i=0; metin[i] !='\0'; i++){
        if(metin[i]== aranan){
           harfSayac++;
        }
     }
   return harfSayac;
}

int main(){
   char aranan,metin[100];
   printf("bir metin giriniz:");
   gets(metin);
   
   printf("metinde aranacak harfi giriniz:");
   scanf("%c",&aranan);

   int sonuc = harfSayisi(metin,aranan);
   if(sonuc)
   printf("girilen metinde %c harfi %d kez tekrarlandi",aranan,sonuc);

   else{
    printf("girilen metinde %c harfi bulunmamaktadi\n",aranan);
   }







    return 0;
}