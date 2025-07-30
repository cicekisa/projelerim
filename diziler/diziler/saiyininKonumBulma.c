//Girilen N elemanlı bir tamsayı dizisinde istenen bir sayıyı arayıp konumunu 
//yazdırınız.
#include <stdio.h>
int main(){
   int N,i,dizi[N];

   printf("dizinin eleman sayisini giriniz:");
   scanf("%d",&N);

   printf("dizinin elemanlari:\n");
   for(i=0; i<N;  i++){
      printf("dizi[%d]:",i+1);
      scanf("%d",&dizi[i]);
   }
   int aranan,bulundu=0; // aranan = aranan konum 
    printf("aranacak sayiyi giriniz:");
    scanf("%d",&aranan);
    for(i=0; i<N;  i++){
       if(dizi[i]==aranan){
        printf("%d sayisi dizinin %d.konumunda bulundu\n",aranan,i+1);
        bulundu=1;
        break;
       }
    }
    if(!bulundu)
       printf("%d sayisi dizide bulunamadi\n",aranan);

    return 0;
}