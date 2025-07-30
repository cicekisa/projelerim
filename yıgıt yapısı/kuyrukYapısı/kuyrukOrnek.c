#include <stdio.h>
#define boyut 5
int kuyruk[boyut], front = -1, rear = -1;

void enQueue(int data){ // data = veri   enQueue= kuyruk
    if (rear == boyut-1) {
        printf("\n kuyruk doludur,ekleme yapilamaz.\n");
    return;
    }
    if (front == -1){ // kuyruk bos ise baslat
        front = 0;
    }
        rear++;
        kuyruk[rear] = data;
        printf("%d eklendi\n",data);
    
}
void deQueue(){  // kuyruktan eleman cıkarma islemi
    if (front == -1 || front > rear){
        printf("kuyruk bos! ve cikarma yapilamaz\n");
        front = -1;
        rear = -1;
        return;
    }
    printf("%d kuyruktan cikarildi\n",kuyruk[front]);
    front++;
 //   if(front > rear){ // kuyruk tamamen bossa sıfırla
 //      front = -1;
 //      rear =-1;
 //   }
}
void listele(){
    if(front == -1 || front > rear){
        printf("\n kuyruk bostur.\n");
        return;
    }
    printf("kuyruktaki elemanlar: ");
    for(int i = front; i <= rear; i++){
        printf("%d ", kuyruk[i]);
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

    switch (secim){
    case 1:
        printf("\n veri giriniz:");
        scanf("%d", &data);
        enQueue(data); //kuyruga ekleme
        listele();
        break;
    case 2:
        deQueue(); // kuyruktan cıkarma
        listele();
        break;
    case 3:
      listele();
      break;
    case 4: 
     printf("programdan cikis yapiliyor...\n");
     exit(0);     
    default:
       printf("hatali secim yaptiniz,tekrar deneyiniz\n");
    }
  }
    return 0;
}