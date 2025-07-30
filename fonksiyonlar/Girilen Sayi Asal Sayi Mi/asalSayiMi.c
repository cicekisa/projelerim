#include <stdio.h>

int AsalMi(int sayi){

    for(int i=0; i<sayi; i++){
        if(sayi%i ==0)
        return  0;
    }
    
}
int main(){
    int N;
    printf(" bir sayi giriniz:");
    scanf("%d",&N);

    if(AsalMi(N)){
    printf("Girilen %d Sayisi Asaldir",N);
    }
    else{ 
    printf("Girilen %d sayisi Asal Degildir.");
    }
    return 0;
}