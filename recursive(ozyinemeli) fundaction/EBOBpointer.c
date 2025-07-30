/* Girilen 2 sayının en büyük ortak bölenini(EBOB) 
özyinelemeli olarak bulunuz. BUNU pointer ile 
birlesstirerek yaptik
*/
/*
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
*/
#include <stdio.h>
#include <stdlib.h>
int EBOB(int *a,int *b){
    if(*a ==*b)
       return *a;
    else if(*a>*b){
     *a -= *b;
       return EBOB(a,b);   
    }
    else{
        *b -= *a;
        return EBOB(a,b);
    }
}
int main(){
    int x,y;
     printf("2 sayi giriniz:");
     scanf("%d%d",&x,&y);
    
    printf("girilen sayilarin EBOB'U:%d",EBOB(&x,&y));

    return 0;
}