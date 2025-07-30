#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char isim[5][30];
    
    // dosyayi binary olarak olusturma
    file = fopen("string.dat","wb");
    if(file==NULL)
      printf("dosya olusturulamadi\n");
    
    
    printf("lutfen 5 adet isim giriniz\n");
    for(int i=0; i<5; i++){
        printf("%d.ismi giriniz:",i+1);
        fgets(isim[i],sizeof(isim[i]),stdin);
    }
   
      
    for(int i=0; i<5; i++){
        fwrite(isim[i],sizeof(char),30,file);
    }
    fclose(file);
    printf("names written files succesful\n");

    return 0;
}