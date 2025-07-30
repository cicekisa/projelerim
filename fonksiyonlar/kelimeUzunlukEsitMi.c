/* Girilen 2 kelimenin uzunluklarının eşit olup 
olmadığını bir önceki sorudaki uzunluk 
bulma fonksiyonunu kullanarak yazdırınız.*/

/*
#include <stdlib.h>
#include <stdio.h>
int karakterUzunlugu(char karakter[]){
    int uzunluk=0;
    while(karakter[uzunluk] !='\0'){
        uzunluk++;
    }
    return uzunluk;
}


int main(){
    char karakter1[100],karakter2[100];
    printf("birinci karakter dizisi giriniz:");
    gets(karakter1);
     printf("ikinci karakter dizisi giriniz:");
    gets(karakter2);
  // karakterler arsindaki biraktigimiz spaceyi de sayiyor uzunluk olarak
   int kelime1 = karakterUzunlugu(karakter1);
   int kelime2 = karakterUzunlugu(karakter2);
   if(kelime1 == kelime2){
    printf("girilen kelimelerin uzunluklari esittir\n");
   }   
   else
   printf("girilen kelimelerin uzunlukalari esit degildir\n");


    return 0;
}*/
// 2.yol 
#include <stdlib.h>
#include <stdio.h>
int karakterUzunlugu(char karakter1[],char karakter2[]){
    int uzunluk1=0,uzunluk2=0;
    while(karakter1[uzunluk1] !='\0'){
        uzunluk1++;
    }
    while(karakter2[uzunluk2] !='\0'){
        uzunluk2++;
    }
     if(uzunluk1==uzunluk2)
       printf("girilen kelimelerin uzunluklari esittir");

     else
       printf("girilen kelimelerin uzunluklari esit degildir");
}


int main(){
    char karakter1[100],karakter2[100];
    printf("ilk karakter dizisi giriniz:");
    gets(karakter1);
    printf("ikinci karakter dizisi giriniz:");
    gets(karakter2);
  // karakterler arsindaki biraktigimiz spaceyi de sayiyor uzunluk olarak
    karakterUzunlugu(karakter1,karakter2);
   


    return 0;
}