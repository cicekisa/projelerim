/* Girilen bir kelimenin palindrom olup olmadığını
 yığıt kullanarak bulunuz.(Bir önceki sorunun devamı
  gibi düşünülerek yapılabilir)*/
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
    Yigit[++top] = x;
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
    for(int i=0; i<=top; i++){
        printf("%c ",Yigit[i]);
    }
    printf("\n");
}
int main(){
    int palindrom=1;
    char kelime[ES];
    printf("bir  kelime giriniz:");
    scanf("%s", kelime);
    
    int uzunluk = strlen(kelime);
    // karakterleri yıgıta ekleme
    for(int i=0; i<uzunluk; i++){
        push(kelime[i]);
    }
    printf("kelimenin tersi: ");
    // yıgıttan karakterleri cıkartarak ters sırayla yazdirma islemi
   /* while(!isEmpty()){
        
        printf("%c",pop());
    }
    printf("\n");
    */
   printf("kelimenin tersi: ");
    for(int i=0; i<uzunluk; i++){
        char c = pop();
        printf("%c",c);
        if(kelime[i] ==  c){
             palindrom = 0;
             break;
        }
    }
    if(palindrom)
       printf("girilen %s kelimesi palindrom",kelime);
    else 
       printf("%s kelimesi palindrom degildir\n",kelime);    
   return 0;
}
// BASKA BİR YOL
/*yığıt ile palindrom 
#include <stdio.h>
#include <string.h>

#define BOYUT 100 // Maksimum kelime uzunluğu

char Yigit[BOYUT]; // Karakter yığını (stack)
int top = -1; // Yığıtın başlangıç değeri

// Dolu mu kontrolü
int isFull() {
    return (top == BOYUT - 1);
}

// Boş mu kontrolü
int isEmpty() {
    return (top == -1);
}

// Karakter ekleme (Push) fonksiyonu
void Push(char c) {
    if (isFull()) {
        printf("Yigit dolu, ekleme yapilamaz!\n");
        return;
    }
    Yigit[++top] = c;
}

// Karakter çıkarma (Pop) fonksiyonu
char Pop() {
    if (isEmpty()) {
        return '\0'; // Yığıt boşsa null karakter döndür
    }
    return Yigit[top--];
}

// Palindrom kontrolü
int PalindromMu(char kelime[]) {
    int uzunluk = strlen(kelime);

    // Kelimenin karakterlerini yığıta ekle
    for (int i = 0; i < uzunluk; i++) {
        Push(kelime[i]);
    }

    //  Yığıttan karakterleri çekerek ters kelimeyi kontrol et
    for (int i = 0; i < uzunluk; i++) {
        if (kelime[i] != Pop()) {  // Karakterler eşleşmezse palindrom değildir
            return 0;
        }
    }
    return 1; // Eğer döngü tamamlandıysa palindromdur
}

int main() {
    char kelime[BOYUT];

    printf("Bir kelime giriniz: ");
    scanf("%s", kelime);

    // Palindrom kontrolü
    if (PalindromMu(kelime)) {
        printf("\"%s\" bir palindromdur.\n", kelime);
    } else {
        printf("\"%s\" bir palindrom degildir.\n", kelime);
    }

    return 0;
}
*/