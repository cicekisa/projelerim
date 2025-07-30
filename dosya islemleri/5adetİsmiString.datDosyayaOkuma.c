//Kullanıcının girdiği 5 tane ismi “string.dat” binary(ikili) 
//dosyasına satır satır yazdırınız.
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char isim[5][30];
    
    printf("lutfen 5 adet isim giriniz\n");
    for(int i=0; i<5; i++){
        printf("%d.ismi giriniz:",i+1);
        fgets(isim[i],sizeof(isim[i]),stdin);
    }
    // dosyayi binary olarak olusturma
    file = fopen("string.dat","rb");
    if(file==NULL)
      printf("dosya olusturulamadi\n");
      
    for(int i=0; i<5; i++){
        fwrite(isim[i],sizeof(char),sizeof(isim[i]),file);
    }

    fclose(file);
    printf("names written files succesful\n");

    return 0;
}