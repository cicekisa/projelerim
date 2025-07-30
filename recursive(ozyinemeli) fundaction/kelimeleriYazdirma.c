/*Girilen kelimedeki karakterleri özyinelemeli 
fonksiyon ile yazdırınız.*/
#include <stdio.h>
#include <stdlib.h>

void karakteriYazdirma(char kelime[],int sayac){
    if(kelime[sayac] =='\0')
    return 0;
    else{
    printf("%c",kelime[sayac]);
    printf("  ");
    karakteriYazdirma(kelime,sayac+1);
    }
}
int main() {
    char kelime[30];
    printf("bir  kelime giriniz:");
    scanf("%s", kelime);

    karakteriYazdirma(kelime,0);



    return 0;
}
