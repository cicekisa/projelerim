#include <stdio.h>
#include <stdlib.h>

void toplamBul(int a,int b,int *toplam){
    *toplam = a+b;
}  
void FarkBul(int a,int b,int *fark){
   *fark = a-b;
}
int main(){
   int a,b;
   printf("2 sayi griniz:");
   scanf("%d%d",&a,&b);
 
   int *toplam=0,*fark=0;
    toplamBul(a,b,&toplam);
    FarkBul(a,b,&fark);
   printf("toplamlari:%d\n",toplam);
   printf("farklari:%d\n",fark);

    return 0;
}