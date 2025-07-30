#include <stdio.h>
#include <stdlib.h>
void toplamBul(int sayi,int *toplam){
   *toplam +=sayi;
   }

int main(){
   int N,i,sayi,toplam=0;
      printf("kac adet sayi toplansin:");
      scanf("%d",&N);
          
   for(i=0; i<N; i++){
       printf("%d.sayiyi giriniz:",i+1);
       scanf("%d",&sayi);
       toplamBul(sayi, &toplam);
   }
   printf("toplam:%d\n",toplam);
   
   return 0;
}