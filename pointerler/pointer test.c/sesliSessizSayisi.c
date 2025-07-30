/* Girilen bir kelimedeki sesli ve sessiz harf sayılarını pointer
 kullanarak bulunuz.(türkçe karakter kullanılmayacaktır)*/
#include <stdio.h>
#include <stdlib.h>
void harfSayisiBulma(char *kelime,int *sesliHarf,int *sessizHarf){
  char sesliHarfler[] = "a e i o u A E I O U";
  *sesliHarf=0;
   *sessizHarf =0;
   while(*kelime != '\0'){
       int sesli=0;
       for(int i=0; sesliHarfler[i] !='\0'; i++){
          if(*kelime == sesliHarfler[i]){
            (*sesliHarf)++;
            sesli=1;
            break;
          }
       }
        if(!sesli && ((*kelime>='a' && *kelime<='z') || (*kelime>='A' && *kelime<='Z'))){
           (*sessizHarf)++;
        }   
         kelime++;
   }
}

int  main(){
    char *kelime =(char*)malloc(sizeof(char));
    if(kelime==NULL){
    printf("yer bulunamadi\n");
    exit;
    } 
    printf("kelime gir:");
    scanf("%s", kelime);
    
    int sesliHarf,sessizHarf;
    harfSayisiBulma(kelime,&sesliHarf,&sessizHarf);
    printf("dizideki sesli harf sayisi:%d\n",sesliHarf);
    printf("sessiz harf sayisi:%d",sessizHarf);
    
    return 0;
}