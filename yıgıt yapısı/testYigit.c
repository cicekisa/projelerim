/*test*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ES 5
int kuyruk[ES],front=-1,rear=-1;

void enqueue(int data){
    if(rear == ES-1){
      printf("kuyruk doludur\n");
      return ;
    }
    if(front == -1){
      front =0;
    }

    rear++;
    kuyruk[rear] = data;
    printf("%d eklendi\n",data);
}
void dequeue(){
    if(front == -1  || front>rear){
        printf("kuyruk bostur ve cikarma yapilamaz");
            front = -1;
            rear = -1;
            return;
    }
    printf("%d kuyruktan cikarildi\n",kuyruk[front]);
    front++;
}
void listele(){
    if(front==-1  || front>rear){
        printf("kuyruk bos\n");
        return ;
    }
    printf("elemanlar: ");
    for(int i=front; i<=rear; i++){
        printf("%d ",kuyruk[i]);
    }
    printf("\n");
}

int main(){
    int secim,data;
    while(1){
    printf("\n1-enQueue(ekle)");
    printf("\n2-deQueue(cikar)");
    printf("\n3-listele)");
    printf("\n4- cikis");
    printf("\nyapmak istediginiz islemi giriniz:");
    scanf("%d", &secim);
       
        switch(secim){
            case 1:
                  printf("veri giriniz:");
                  scanf("%d",&data);
                  enqueue(data);
                  break;
            case 2:
                  dequeue();
                  break;   
              
            case 3:
                  listele();
                  break;
            case 4:
                 printf("cikis yapiliyor...\n");
                 exit (0);
            default:
                 printf("hatali girdiniiz,tekrar deneyin\n");           
        } 
    }
    return 0;
}