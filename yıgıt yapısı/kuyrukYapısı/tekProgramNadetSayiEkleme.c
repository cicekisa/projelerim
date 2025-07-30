/* Kullanıcıdan alınan sayılar bir kuyruk yapısına eklendikten sonra kuyruktaki sayıların toplamını ve en büyük sayıyı ekrana 
yazdırınız.*/
#include <stdio.h>
#include <stdlib.h>
#define BOYUT 5 // kuyruk icin max eleman sayısı
//YIGIT(stack) tanımlamaları
int Yigit[BOYUT];
int top=-1;
//kuyruk(QUEUE) tanımlamaları
int Kuyruk[BOYUT];
int front=-1,rear=-1;

//Yıgıt fonksiyonları
int  isFull(){
    return top == BOYUT-1;
}
int isEmpty(){
    return top == -1;
}
void Push(int x){
    if(isFull){
      printf("Yigit dolu,ekleme yapilamaz!\n");
      return;
    }
    Yigit[++top] = x;
    printf("%d yigita eklendi\n");
}
void Pop(){
    if(isEmpty){
        printf("Yigit Bos\n");
        return;
    }
    int cikan = Yigit[top--];
    printf("%d Yigittan cikarildi\n",cikan);
}
int Top(){
    if(isEmpty()){
        printf("Yigit Bos!\n");
        return -1;
    }
    return Yigit[top];
}
void listeleYigit(){
    if(isEmpty()){
        printf("Yigit Bos!\n");
        return;   
    }
    printf("Yigit Elemanlari: ");
    for(int i=0; i<=top; i++){
      printf("%d ",Yigit[i]);
    }
    printf("\n");
}
void ClearYigit(){
    while(!isEmpty)  Pop();
    printf("Yigit Bosaltildi\n");
}
// kuyruk Fonksiyonları
int DoluMu(){
    return rear == BOYUT-1;
}
int BosMu(){
    return front == BOYUT-1  || front>rear;
}
void Enqueue(int x){
    if(DoluMu()){
        printf("Kuyruk dolu\n");
        return;
    }
    if(BosMu())  front = 0;
    Kuyruk[++rear] = x;
    printf("%d kuyruga eklendi\n",x);
}

void Dequeue(){
    if(BosMu){
        printf("Kuyruk Bos!\n");
        return ;
    }
    printf("%d kuyruktan cikarildi\n",Kuyruk[front++]);
    if(front > rear)
      front = rear =-1;  // kuyruk bosaltıldıgında tekrardan eleman ekleme icin front ve rear basa alınıcak
}
void ListeleKuyruk(){
    if(BosMu()){
        printf("Kuyruk Bos!\n");
        return;
    }
    printf("Kuyruk Elemanlari:");
    for(int i=front; i<=rear; i++){
        printf("%d",Kuyruk[i]);
    }
    printf("\n");
}
void ClearKuyruk(){
    front = rear = -1;
    printf("Kuyruk Bosaltildi\n");
}
// yıgıttan cekilen N elemanı Kuyruga ekle
void YigittanKyruga(int N){
    if(N > top+1){
        printf("Yigitta yeterli eleman yok!\n");
        return;
    }
    for(int i=0; i<N; i++){
        int x = Yigit[top--];
        printf("%d yigittan alindi kuyruga eklendi\n",x);
        Enqueue(x);
    }
}
int main(){
    int secim,sayi,N;

    do{
        printf("\n---- MENU ----\n");
        printf("1.Yigita Ekle(push)\n2.Yigittan Cikar(Pop)\n3.Yigittan N eleman al ve kuyruga Ekle\n");
        printf("4.Yigit Listele\n5.Kuyruk Listele\n6.En Ustteki Yigit Elemanini Gor(Top)\n");
        printf("7.Yigiti temizle\n8.Kuyrugu Temizle\n9.Cikis\nSeciminizi giriniz:");
        scanf("%d",&secim);

        switch(secim){
            case 1:
                  printf("eklenecek sayiyi giriniz:");
                  scanf("%d",&sayi);
                  Push(sayi);
                  break;
            case 2:
                  Pop();
                  break;
            case 3:
                  printf("kac eleman yigittan alinsin ve kuyruga eklensim?");
                  scanf("%d",&N); 
                  YigittanKyruga(N);
                  break;
            case 4:
                  listeleYigit();
                  break;

            case 5: 
                  ListeleKuyruk();
                  break;
                  
            case 6:
                  printf("Yigitin en ustunedeki eleman:%d\n",Top());
                  break;
            case 7:
                  ClearYigit();            
                  break;

            case 8:
                  ClearKuyruk();
                  break;
            case 9:
                  printf("programdan Cikiliyor...\n");
                  break;
            default:
                  printf("Gecersiz secim,Tekrar deneyiniz!\n");                    
                }
    }
    while(secim !=9);
    return 0;
}


