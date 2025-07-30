/*Verilen bir dizinin k.konumuna x değerini yerleştiriniz.
(k ve x kullanıcıdan alınacaktır.)*/
#include <stdio.h>
int main(){
   int N,k,x,dizi[N];
   printf(" dizinni kac elemanli olacagini belirtiniz:");
   scanf("%d",&N);

   int i;
   printf("dizinin elemanlari:\n");
   for(i=0; i<N; i++){
    printf("dizi[%d]",i+1);
    scanf("%d",&dizi[i]);
   }  

   printf("yerlestirmek istediginiz konumu (0-%d)giriniz: ",N-1);
   scanf("%d",&k);
   printf("diziye hangi sayi yerlestirilecek: ");
   scanf("%d",&x); 

  if(k>=0 && k<N){
       dizi[k] = x;

   printf("guncellenmis dizi:\n");
   for(i=0; i<N; i++){
    printf("%d ",dizi[i]);
   }
  }
  else{
    printf("Hatali Konum Girdiniz!");
  }
    return 0;
}