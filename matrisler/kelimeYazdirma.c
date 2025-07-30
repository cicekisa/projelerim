#include <stdio.h>

int main(){
   char cumle[100],matris[5][10];
  int i,j,sayac=0;
 
  printf("bir cumle giriniz:");
  gets(cumle);

  for(i=0; i<5; i++){
    for(j=0; j<10; j++){
       if(cumle[sayac] == ' '){
        sayac++;
        break;
       }
       else{
        matris[i][j] = cumle[sayac];
        sayac++;
        printf("%3c",matris[i][j]);
       }

    }
    printf("\n");
  }
  if(cumle[sayac] == '\0')
    return 0;
}