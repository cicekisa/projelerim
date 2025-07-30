/*Kullanıcıdan alınan sayılar bir kuyruk yapısına eklendikten sonra
 kuyruktaki sayıların toplamını ve en büyük sayıyı ekrana 
yazdırınız.*/
#include <stdio.h>
#include <stdlib.h>

struct Node{ 
   int data;           // veri
   struct Node*next;  // sonraki dugume referans
};
// kuyruk yapısını tanımlama
typedef struct queue{
   struct Node* front; // kuyrugun onu 
   struct Node* rear;  // kuyrugun arkası
}queue;

// yeni bir kuyruk olusturulur ve baslangıc durunumu ayarlar
queue* kuyrukOlustur(){ // kuyruk olustur
   queue *kuyruk = (queue*)malloc(sizeof(queue));
   kuyruk->front = NULL; // kuyurk bos on Null
   kuyruk->rear = NULL; // kuyruk bos arka Null
   return  kuyruk;
}
void enqueue(queue* kuyruk,int value){ // eleman ekleme  value => (deger)
    struct Node* New = (struct Node*)malloc(sizeof(struct Node));
    New->data = value;  // dugumun verisini ayarlar
    New->next = NULL;

    if(kuyruk->rear == NULL){
      kuyruk->front = kuyruk->rear = New;
      return;
    }
    kuyruk->rear->next = New; // kuyrugun sonuna eleman ekleme islemi
    kuyruk->rear = New;
}
void display(queue* kuyruk,int*total,int *max){
   if (kuyruk->front == NULL) { // Kuyruk boşsa
      printf("Kuyruk boş! İşlem yapilamaz.\n");
      return ;
  }
   struct Node* gecici = kuyruk->front;  // kuyrugun basndan baslar
   *total = 0;               // toplam sıfırdan baslatir
   int firstElement = 1;    // ilk elemanı kontrol icin isaretler


   while(gecici != NULL){ // kuyrugun sonuna kadar ilerler
     *total += gecici->data;
     if(firstElement || gecici->data > *max){
      *max = gecici->data;
      firstElement = 0;
     }
     gecici = gecici->next;
   }
}
int main(){
    queue* kuyruk = kuyrukOlustur(); // yeni bir kuyruk olusturmak icin
   int N,value;
   printf("kac sayi eklemek istersiniz: ");
   scanf("%d",&N);
   for(int i=0; i<N; i++){
      printf("%d.sayiyi giriniz:",i+1);
      scanf("%d",&value);
      enqueue(kuyruk,value);
   }
   
    int total,max =0;  // toplam ve maksimum icin degiskenler
    max = kuyruk->front->data;
    display(kuyruk,&total,&max);  // kuyrugun islerini yapar
   printf("kuyruktaki sayilarin toplami:%d\n",total);
   printf("kuyruktaki en buyuk sayi:%d ",max); 
  
    return 0;
}
