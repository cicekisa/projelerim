#include <stdio.h>

int asal(int a){
        if(a<2){
          return 0;
        }
    for(int i=2; i<=a/2; i++){
        if(a%i==0)
        return 0;
    }
    return 1;
}
int main(){
   int i,sayi;
   printf("hangi sayiya kadar asalligi kontrol edilsin:");
   scanf("%d",&sayi);
   
   printf("1-%d arasindaki sayilarin asalligi:\n",sayi);
   for(i=1; i<=sayi; i++){
      if(asal(i)){
        printf("%d asal\n",i);
      }
      else{
        printf("%d asal degil\n",i);
      }
   }
   


    return 0;
}