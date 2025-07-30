#include <stdio.h>
#include <stdlib.h>
void terstenSayiYazdirma(int N){
    if(N>0){
       printf("%d ",N);
       terstenSayiYazdirma(N-1); 
    }
}

int main(){
    int N;
    printf("N degerini giriniz:");
    scanf("%d",&N);

    terstenSayiYazdirma(N);


    return 0;
}