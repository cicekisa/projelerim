#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *Next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

int enqueue(int data){
    if(front == NULL){ // struct bos ise
        struct Node *New =(struct Node*)malloc(sizeof(struct Node));
        New->data = data;
        New->Next = NULL;

        front = rear = New;
    }
    else{ // kuyruk bos degilse
      //  eleman olusturacaz sonra sona eleman ekle ardından da rear'ı guncelleyecez
        struct Node *New = (struct Node*)malloc(sizeof(struct Node));
        New->data = data;
        New->Next = NULL;

        rear->Next = New; // rear'ın nextine New degiskenini atıyoruz
        rear = New;  
    }
} 
int display(){
    if(front == NULL){
        printf("kuyruk bos\n");
        return 1;
    }
    printf("queue:");
    struct Node *gecici =front;
     while(gecici !=NULL){
         printf("%d-",gecici->data);
          gecici = gecici->Next;
     }
     printf("\n");
}

int dequeue(){
    if(front == NULL){
      printf("kuyruk bos\n");
      return 1;
    }
    struct Node *temp = front;  // *temp amacı silinen eski frontu tamamen silmek yani hafizayı temizleme islemi
    front = front->Next; // ilk elemanın nexti artik ilk eleman oldu

    free(temp);
    return 1;
}
int main(){
   enqueue(5);
   enqueue(12);
   enqueue(72);
   display();
   dequeue(12);
   dequeue(5);
   dequeue(72);
   display();
   enqueue(35);
   enqueue(65);
   display();

    return 0;
}