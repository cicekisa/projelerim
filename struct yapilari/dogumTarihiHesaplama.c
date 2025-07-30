#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct dogumTarihi{
    int gun;
    int ay;
    int yil;
};

int main(){
    struct dogumTarihi x;
    struct dogumTarihi y;
    printf("kisinin dogum tarihini giriniz:");
    scanf("%d%d%d",&x.gun,&x.ay,&x.yil);

    printf("bugunun tarihi giriniz:");
    scanf("%d%d%d",&y.gun,&y.ay,&y.yil);
// dogum tarihi girince ay ve gun tarihi bugunun ay  
//ve gun tarihinden fazla ise assagıdaki asamalar yapılır
    if(x.gun>y.gun){
        y.gun +=30;
        y.ay -=1;
    }
    if(x.ay>y.ay){
        y.ay +=12;
        y.yil -=1;
    }
    printf("simdiye kadar %d gun, %d ay, %d yil yasamistir",y.gun-x.gun,y.ay-x.ay,y.yil-x.yil);

    return 0;
}