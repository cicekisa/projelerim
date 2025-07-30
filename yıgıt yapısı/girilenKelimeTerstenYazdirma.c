/* Girilen bir kelimeyi yığıt kullanarak tersten yazdırınız.
(char tipinde bir yığıt dizisi kullanılacaktır, tüm karakterler 
tek tek push fonksiyonu ile yığıta atılacak daha sonra pop
 fonksiyonu ile çekilen karakterler ekrana yazdırılacaktır.)*/

#include <stdio.h>
#include <string.h>
#define ES 100   // yigitin kapasitesi
int top = -1;  // yigitin en ust elemani
char Yigit[ES];  // dizi

int isFull(){
    return top == ES-1;
}
int isEmpty(){
    return top == -1;
}
void push(char x){
    if(isFull()){
        printf("yigin doludur,ekleme yapilamaz.\n");
    return;
    }
    Yigit[++top] = x; // top = -1 de basladigi icin once arttirip sonra yazdiriyoruz
}
char pop(){
    if(isEmpty()){
        printf("yigit bostur,eleman cikarilamaz\n");
        return '\0';
    }
    return Yigit[top--];
}
void YigitListele(){ // yigitin elemanlarini goruntuleme
    printf("dizinin elemanlari:");
    for(int i=0; i<=top; i++){ // top a kadar yazdirilmasinin nedeni son halini yazdirma 
        printf("%c ",Yigit[i]); // eger top yerine BOYUT yazdirilsaydi surekli yigitin en dolu halini yazdirirdi
    }
    printf("\n");
}
int main(){
    char kelime[ES];
    printf("bir  kelime giriniz:");
    scanf("%s", kelime);
    
    int uzunluk = strlen(kelime);
    // karakterleri yıgıta ekleme
    for(int i=0; i<uzunluk; i++)
        push(kelime[i]);
    
    printf("kelimenin tersi: ");
    // yıgıttan karakterleri cıkartarak ters sırayla yazdirma islemi
    while(!isEmpty()){
        printf("%c",pop());
    }
    printf("\n");

   return 0;
}