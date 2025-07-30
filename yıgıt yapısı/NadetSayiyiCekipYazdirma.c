/*Kullanıcıdan alınan N değerine göre yığıttan N adet
 sayıyı çektikten sonra yığıtın son durumunu tekrar 
 yazdırınız
  Stack temel işlemleri:
 • push(data) : yığıta veri 
ekleme
 • pop() : yığıttan veri silme
 • top() veya peek() : yığıtın 
en üstündeki veriyi 
okuma
 • clear() : yığıtı boşaltma
 • isEmpty() : yığıt boş mu
 • isFull() : yığıt dolu mu
*/

 #include <stdio.h>
#include <stdlib.h>

int *yigit; 
int top = -1;
int N;

 void push(int x){
    if(top < N-1) // yigitin en sondaki elemanı degilse ekleme yapılır
       yigit[++top] = x;
    else
        printf("yigit dolu!\n");   
 }

 void pop(){
    if(top >= 0)
       printf("Yigittan cikarilan:%d\n",yigit[top--]);
    else 
       printf("Yigit bos!\n");
 }
 void display(){
    if(top>=0){
        printf("Yigitin son durumu: ");
        for(int i=top; i>=0; i--){
            printf("%d ",yigit[i]);
        }
        printf("\n");
    }
    else
        printf("Yigit Bos!\n");
 }
 int main(){  
    int x;  
    printf("Yigitin kapasitesini giriniz:");
    scanf("%d",&N);
    // dinamik yigit icicn bellek tahsisi
    yigit = (int*)malloc(sizeof(int)*N);
    if(yigit == NULL){
        printf("bellek tahsisi Basarisiz!\n");
        return -1;
    }   
    for(int i=0; i<N; i++){
       push(i+1); // 1'den N'e kadar olan sayilari yigita ekliyoruz
    }
    printf("yigittan kac eleman cekmek istiyorsun:");
    scanf("%d",&x);
    for(int i=0; i<x; i++){
       pop(); // x adet sayi yigittan cekilecek
    }
    printf("\n");
    display(); // elemanlari yazdirmak icin
    printf("\n");

    free(yigit);
    return 0;
}