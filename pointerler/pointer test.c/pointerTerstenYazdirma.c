#include <stdio.h>
#include <stdlib.h>
int main(){
   int i,dizi[5];
    printf("dizinin elenamalarini giriniz:\n");
  for(i=0; i<5; i++){
    printf("%d.sayiyi giriniz:",i+1);
    scanf("%d",&dizi[i]);
  }
  int *p = &dizi[4]; 

   for(i=0; i<5; i++){
  //  printf("p nin adresi:%p\n",p);
    printf("%d ",*(p-i));
   }
   printf("\n");
    return 0;
}