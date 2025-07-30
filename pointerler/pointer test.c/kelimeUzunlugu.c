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
   char *kelime = (char*)malloc(sizeof(char)*30);

   printf("bir kelime giriniz:");
   scanf("%s", kelime);
   
   int uz = uzunlukBul(kelime);
   printf("uzunluk:%d",uz);

}