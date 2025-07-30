#include <stdio.h>
#include <stdlib.h>
int main(){
   int *a = (int*)malloc(sizeof(int));
   int *b = (int*)malloc(sizeof(int));
   int *top =  (int*)malloc(sizeof(int)); 
    printf("a ve b degerlerini giriniz:");
    scanf("%d%d",a,b);

     *top = *a +*b;
   printf("girilen sayilarin toplami:%d",*top);
    free(a);
    free(b);
    free(top);

    return 0;
}