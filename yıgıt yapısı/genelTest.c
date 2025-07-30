/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ES 10

int top=-1;
int yigit[ES];

int isFull(){
    if(top == ES-1)
       return 1;
    return 0;   
}
int isEmpty(){
    if(top == -1)
      return 1;
    return 0;  
}
void push(int data){
    if(isFull() ==1){
        printf(" Yigit doludur,ekleme yapilamaz!\n");
        return 0;
    }
    yigit[++top] = data;
    printf("%d Yigita eklendi\n",data);
}
void pop(){
    if(isEmpty() == 1){
        printf("Yigit bos eleman cikartilamaz!\n");
        return 0; 
    }
    int cikan = yigit[top--];
    printf("%d cikartildi\n",cikan);
    return cikan;
}
void listele(){
     printf("listenin elemanlari: ");
     for(int i=0; i<=top; i++){
        printf("%d ",yigit[i]);
     }
     printf("\n");
}
int Top(){ // en ustteki eleman icin
    if(isEmpty() == 0){
        printf("Yigit Bos!\n");
        return -1;
    }
    return yigit[top];
}
void clean(){
    while(!isEmpty()){
        pop();
    }
    printf("Yigit temizlendi!\n");
}
int main(){
    srand(time(0));
    printf("rastgele uretilen 10 sayi:\n");
    for(int i=0; i<ES; i++){
        int rastgeleSayi = rand()%101;
        push(rastgeleSayi);
    }
    listele();
    pop();
    pop();
    listele();
    int ust = Top();
    printf("En Ustteki Eleman:%d\n",ust);
    clean();
    listele();

    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int *yigit;
int top = -1;
int N;

void push(int x){
    if(top < N-1)
       yigit[++top] = x;
    else
       printf("Yigit Dolu\n");   
}
void pop(){
    if(top >= 0)
       printf("yigittan %d cikarildi\n",yigit[top--]);
   else 
      printf("Yigit Bos\n");
}
void listele(){
    if(top >=0){
        printf("Yigitin son hali:");
        for(int i=top; i>=0; i--){
            printf("%d ",yigit[i]);
        }
        printf("\n");
    }
    else
       printf("Yigit Bos!\n");
}
int main(){
    int  x;
    printf("Yigitin kapasitesinin giriniz:");
    scanf("%d",&N);

    yigit =(int*)malloc(sizeof(int)*N);
    if(yigit == NULL){
      printf("bellek tahsisi basarisiz\n");
      return -1;
    }
    for(int i=0; i<N; i++){
        push(i+1); // 1^den N'e kadar sayilari gonderiyor
    }
    printf("Yigittan kac eleman cekmek istiyorsunuz:");
    scanf("%d",&x);
    for(int i=0; i<x; i++){
        pop();
    }
    printf("\n");
    listele();
    printf("\n");
    free(yigit);
    return 0;

}