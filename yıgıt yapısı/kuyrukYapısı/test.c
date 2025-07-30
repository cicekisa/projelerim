/*Kullanıcıdan alınan bir sayının listede kaçıncı sırada olduğunu
 bulunuz.(Örneğin; 4, 7, 2, 5 olan bir listede sayı:2 girilmişse 
 sıra:3 olur)*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node*Next;
}Node;

void ekle(Node**ilk,int data){
   Node* New = (Node*)malloc(sizeof(Node));
   New->data = data;
   New->Next = NULL;

   if(*ilk == NULL){
    *ilk = New;
    return;
   }
   Node* gecici = *ilk;
   while(gecici->Next != NULL){
     gecici = gecici->Next;
   }
   gecici->Next = New;
}
void listele(Node* ilk){
    Node* gecici = ilk;
    if(gecici == NULL){
        printf("liste Bos!\n");
        return;
    }
    while(gecici != NULL){
     printf("%d ",gecici->data);
     gecici = gecici->Next;
    }
    printf("\n");
}
int konumBul(Node* ilk,int sayi){
   int siradaki = 1;
   Node*gecici = ilk;
   while(gecici != NULL){
    if(gecici->data == sayi){
        return siradaki;
    }
    gecici = gecici->Next;
    siradaki++;
   }
   return -1;
}
void bellekTemizle(Node* ilk){
    Node* gecici = ilk;
    while(ilk != NULL){
        gecici = ilk;
        ilk = gecici->Next;
        free(gecici);
    }
}
int main(){
    Node* ilk = NULL;
    int sayi,sirasi,N;
    printf("listeye eklemek istediginiz eleman sayisini giriniz:");
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        printf("%d.elemani giriniz:",i+1);
        scanf("%d",&sayi);
        ekle(&ilk,sayi);
    }
    printf("bagli liste: ");
    listele(ilk);
    printf("aranacak sayiyi griniz:");
    scanf("%d",&sayi);

    sirasi = konumBul(ilk,sayi);
    if(sirasi != -1)
      printf("sayi %d, bagli listede %d.sirada.\n",sayi,sirasi);
    else
      printf("girdiginiz sayi listede bulunamadi!\n");
      
    bellekTemizle(ilk);
    return 0;  

}