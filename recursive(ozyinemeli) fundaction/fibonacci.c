/* Fibonacci serisinin n.elemanını özyinelemeli 
olarak bulunuz*/
#include <stdio.h>
#include <stdlib.h>
int fibonacci(int N){
    if(N==0){
        return 0;
    }
     else if(N==1){
      return 1; 
     }
      else{
         return fibonacci(N-1) + fibonacci(N-2);
      }
       
    
    
}
int main(){
   int N;

   while (1){
   printf("N degerini giriniz:");
   scanf("%d",&N);
   if(N<0)
      printf("hatali girdiniz N pozitif bir deger giriniz:\n");
   
   else
      break;
   }
  
  int sonuc = fibonacci(N);
   printf("%d sayisinin fibonacci degeri:%d\n",N,sonuc);

    return 0;
}