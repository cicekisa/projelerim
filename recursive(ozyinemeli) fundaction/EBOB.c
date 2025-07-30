/* Girilen 2 sayının en büyük ortak bölenini(EBOB) 
özyinelemeli olarak bulunuz.*/
#include <stdio.h>
#include <stdlib.h>
int ebob(int a,int b){
    if(a==b)
         return a;
    else if(a>b)
         return ebob(a-b,b);
    else
        return ebob(a,b-a);     
} 

int main(){
    int x,y;
    printf("2 sayi giriniz:");
    scanf("%d%d",&x,&y);
     
     printf("igirilen sayilarin EBBOB'U:%d",ebob(x,y));
    return 0;
}