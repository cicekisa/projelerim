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
    char karakter[100];
    printf("bir karakter dizisi giriniz:");
    gets(karakter);
  // karakterler arsindaki biraktigimiz spaceyi de sayiyor uzunluk olarak
   int sayac = karakterUzunlugu(karakter);
   printf("girilen karakter dizisinin uzunlugu:%d",sayac);
   


    return 0;
}