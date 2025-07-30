/* Girilen bir kelimeyi pointer kullanarak tersten
 yazdırınız.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
 /*   char *kelime = (char*)malloc(sizeof(char)*30);
    if(kelime ==NULL){
       printf("bellekte yer bulunmadi\n");
       exit;
    }*/
   char kelime[100] ,*p;
    printf("bir kelime giriniz:");
    scanf("%s",&kelime);
     int uzunluk=0;
     while(kelime[uzunluk] !='\0'){
        uzunluk++;
     }
    p = kelime +uzunluk-1; // kelimenin son karakterini isaret ediyor
printf("kelimenin tersten yazimi: ");
while(p>=kelime){
    printf("%c",*p);
    p--;
}

    return 0;
}