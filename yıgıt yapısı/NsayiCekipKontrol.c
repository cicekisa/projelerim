/*Kullanıcıdan alınan N değerine göre yığıttan N
 adet sayıyı çektikten sonra yığıtın son durumunu 
 tekrar yazdırınız.*/
#include <stdio.h>
#include <stdlib.h>
int *Yigit;
int top =-1;
int N;


int isFull(){ // yigit dolu mu
    if(top == N-1)
      return -1;
    else
       return 0;
}
int isEmpty(){ // yigit tamamen bos mu
    if(top == -1)
      return -1;
    else
        return 0;  
}
void push(int x){
    if(isFull() == 1){
        printf("yigit doludur, ekleme yapilamaz.\n");
       return ;
    }
    int cikan = Yigit[top--]; // elemani kayit edip sirayi azaltiyor
    printf("%d cikarildi\n",cikan);
    return cikan;
}
void YigitListele(){
    printf("dizinin elemanlari:");
// N yazdirirsak tum dizi elemanlarini yazdiracaktir mannuel olarak cıkarılan elemanlari cıkarıp son halini gostermeyecektir
    for(int i=0; i<top; i++){
        printf("%d ",Yigit[i]);
    }
    printf("\n");
}

int main(){
    printf("eleman sayisini giriniz:");
    scanf("%d",&N);
    printf("dizinin elemanlari giriniz:\n");
    for(int i=0; i<N; i++){
        printf("%d.sayiyi giriniz:",i+1);
        scanf("%d", Yigit[i]);
    }
    YigitListele();
}

