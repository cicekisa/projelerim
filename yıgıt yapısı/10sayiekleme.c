/* 10 adet sayıyı rastgele üretip yığıta ekleyen ve 
sonra yığıttaki tüm değerleri yazdıran programın kodunu 
yazınız.
 Stack temel işlemleri:
 • push(data) : yığıta veri 
ekleme
 • pop() : yığıttan veri silme
 • top() veya peek() : yığıtın 
en üstündeki veriyi okuma
 • clear() : yığıtı boşaltma
 • isEmpty() : yığıt boş mu
 • isFull() : yığıt dolu mu
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ES 10
int top=-1;
int Yigit[ES];

int isFull(){  // yıgıt dolu mu
    if(top==ES-1)
       return 1;
    return 0;
}
int isEmpty() { // yigit tamamen bos mu
    if(top == -1)
       return 1;
    return 0;
}
void push(int x){ // veri ekleme
    if(isFull() ==1){
        printf("yigit doludur,ekleme yapilamaz.\n");
        return ;
    }
    Yigit[++top]  = x; // top=-1 dfe oldugu icin ekleme yapılacagı zaman [++top] seklinde yazıyor
    printf("%d yigita eklendi.\n",x);
}
 
void pop(){
    if(isEmpty() == 1){
        printf("yigit bos eleman cikartilamaz\n");
        return ;
    }
    int cikan =  Yigit[top--]; // elemani once kaydetip sonra da elemani azaltıyor
    printf("%d cikarildi\n",cikan);
 return cikan;  //baska bir yerde kullanılacaksa return etmemiz lazim yoksa return etmeye gerek yok 

}
void YigitListele(){
    // boyutu yazdirirsak tum dizi elemanlarini yazdıracak son durumu degil
    printf("dizinin elemanlari: ");
    for(int i=0; i<=top; i++){ // eger ES sayısı seklinde yazssaydık tum yıgıtı yazdıracaktı
       printf("%d ",Yigit[i]); // bu yuzden top degiskenini kullandık ki hepsini anlık olarak yazsın
    }
    printf("\n");
}
int Top(){ // yigitin en son eklenen elemanini gosterecek
    if(isEmpty() == 0){
        printf("YIGIT BOS!\n");
        return -1;
    }
    return Yigit[top]; // en ustteki elenami gosterecek
}
void clear(){
    while(!isEmpty()){
        pop();
    }
    printf("Yigit Temizlendi Bossaltildi.\n");
}
int main(){
    srand(time(0));
    printf("rastgele uretilen 10 sayi:\n");
    for(int i=0; i<ES; i++){
        int rastgeleSayi = rand()%101;
        push(rastgeleSayi); // yigit icerisine ekleniyor
    }
    YigitListele();
    
    //int cikan =
     pop();
    pop();
    YigitListele();
    int ust = Top();
    printf("En Ustteki Eleman:%d\n",ust);
    clear();
    YigitListele();

    return 0;
}
/* 10 adet sayıyı rastgele üretip yığıta ekleyen ve 
sonra yığıttaki tüm değerleri yazdıran programın kodunu 
yazınız.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ES 10
int top = -1;
int yigit[ES];

int isFull(){ //yigit dolu mu
    if(top == ES-1)
       return 1;
    return 0;   
}
int isEmpty(){ // yigit tamammen bos mu 
    if(top == -1)
       return 1;
    return 0;  
} 
void push(int x){
    if(isFull() == 1){  // dolu mu kontrolu yapilir
      printf("Yigit bos eleman cikartilamaz.\n");
      return ;
    }
    yigit[++top] = x;  // tap= baslangic degerini arttidiktan sonra eklenir cunku tap degiskeni baslangicta=-1 dir
    printf("%d added(eklendi).\n",x); 
}
void pop(){
    if(isEmpty()==1){
        printf("Yigit bos eleman cikartilamaz.\n");
        return ;
    }
    int cikan = yigit[top--]; // elemani once kaydfetip sonra cikartiyoruz
    printf("%d cikartildi.\n",cikan);
}
void yigitListele(){
    printf("dizinin elemanlari: ");
    for(int i=0; i<=top; i++){ // burada elemanlari yazdiriken anlik olarak yazdirilir
        printf("%d ",yigit[i]);
    }
    printf("\n");
}
int Top(){ // yigitin en son eklenen elemanini gosterecek
   if(isEmpty() == 1){  // yigit eger bossa -1 doner
     printf("Yigit Bos\n");
     return -1;
   }
   return yigit[top]; // en ustteki eleman
}
void clear(){
    while(!isEmpty()){
        pop();
    }
    printf("Yigit Temizlendi.\n");
}
int main(){
    srand(time(0));
    for(int i=0; i<ES; i++){
        int rastgeleSayi = rand()%101;
        push(rastgeleSayi); // yigita eklenmesi icin rastgele uretilen sayilar aktariliyor
    }
    yigitListele();
    pop();
    pop();
    yigitListele();
    int ust = Top();
    printf("en ustteki eleman:%d\n",ust);
    clear(); // yigiti temizler
    yigitListele();

    return 0;
}
*/