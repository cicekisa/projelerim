#include <stdio.h>
#include <stdlib.h>
int uzunlukBul(char *kelime){
  int sayac=0;
  while(*(kelime+sayac) !='\0'){
    sayac++;
  }
  return sayac;
}
int main(){
    char *kelime1 = (char*)malloc(sizeof(char)*50);
    char *kelime2 = (char*)malloc(sizeof(char)*50);
    printf("ilk kelimeyi giriniz:");
    scanf("%s", kelime1);
     printf("diger kelimeyi giriniz:");
    scanf("%s", kelime2);

   int uzunluk1 = uzunlukBul(kelime1);
   int uzunluk2 = uzunlukBul(kelime2);
    if(uzunluk1 == uzunluk2)
    printf("girilen kelimeler esit uzunlukta ve  %d br uzunlugundadir ",uzunluk1); 
    
    else
        printf("girilen kelimelerin uzunluklari esit degildir!");
    
    return 0;
}