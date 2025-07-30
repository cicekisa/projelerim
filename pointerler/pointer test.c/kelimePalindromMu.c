#include <stdio.h>
#include <stdlib.h>

int main(){
   char *kelime  = (char*)malloc(sizeof(char)*30);
   if(kelime==NULL){
    printf("bellek tahsisi yapilamadi\n");
    exit(1);
    }  
    printf("bir kelime giriniz:");
    scanf("%s", kelime);
    int i,uzunluk=0,palindrom=1;

    while(kelime[uzunluk] !='\0'){
        uzunluk++;
    }
    for(i=0; uzunluk/2; i++){
        if(kelime[i] !=kelime[uzunluk-i-1]){
          palindrom=0;
          break;
        }
    }
    if(palindrom)
       printf("girilen %S kelimesi palindromdur\n",kelime);

    else
      printf("girilen %s kelimesi palindrom degildir\n",kelime);   
    
    free(kelime);
    return 0;
}