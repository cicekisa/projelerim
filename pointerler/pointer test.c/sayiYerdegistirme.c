#include <stdio.h>
#include <stdlib.h>
int yerdegistirme(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
   int *a = (int*)malloc(sizeof(int));
   int *b = (int*)malloc(sizeof(int));
    printf(" a ve b degerlerini giriniz:");
    scanf("%d%d",a,b);
     
     printf("ilk hali\n");
     printf("a:%d\nb:%d\n",*a,*b);

    yerdegistirme(a,b);
    printf("son hali\n");
     printf("a:%d\nb:%d\n",*a,*b);
    
    free(*a);
    free(*b);
    return 0;
}