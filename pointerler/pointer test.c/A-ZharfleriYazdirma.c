/* Pointer kullanarak A-Z arası harfleri belleğe
 yerleştirdikten sonra ekrana yazdırınız.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
   char  harfler[26];
    char *p = harfler; 
     printf("bellege yerlestirilen harfler:\n");
    for(int i=0; i<26; i++){
        *p = 'A'+i;
        printf("%c ",*p);
        p++;
    }
    // harfleri ekrana yazdirma
    p = harfler; // pointeri basa dondurur
    printf("\nbellekteki harf:\n");
    for(int i=0; i<26; i++){
        printf("%c ",*p);
        p++;
    }
    return 0;
}
