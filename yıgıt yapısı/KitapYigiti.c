/*struct kullanarak bir Kitap yığıtı oluşturunuz.
 Her kitabın adı, yazarı ve yıl bilgisi kullanıcıdan 
 alınıp yığıta eklenecektir. Kitap ekleme-çıkarma-
 listeleme-en üstteki kitabı yazdırma-toplam kitap 
 sayısını yazdırma-çıkış şeklinde 6 seçenek olarak 
 menü yapısı oluşturup bu işlemler için gerekli 
fonksiyonları yazınız.
*/

#include <stdio.h>
#include <string.h>

#define BOYUT 2   // max 10 kitap bilgileri alinabilir
int top = -1;

typedef struct {
    char isim[50];  // max 50 karakterlik isim girilebilir
    char yazar[50];
    int yil;
}kitap;
kitap yigit[BOYUT];

void push(kitap yenikitap){  // yeniKitabı yıgıta ekler
    if(top == BOYUT - 1){
     printf("Yigit dolu,ekleme yapilamaz\n");  // yigit doluysa printf icerisndeli mesaj yazdirilir
     return;
    }
    //top++;   // aksi halde top bir arttirilir
    yigit[++top] =yenikitap;
}
void pop(){  // yigittaki en usteki kitabin cıkarma islemini yapar 
    top--;  // top çıkarma isleminden sonra azaltılır
    printf("Cikarma islemi Yapildi\n");
}
void kitapListele(){
    printf("---------kitaplar---------\n");
    for(int i=0; i<=top; i++){  // donguyle kitaplarin bilgilerini yigita yazdirir
        printf("%d.kitabin adi:%s\n",i+1,yigit[i].isim);
        printf("%d.kitabin yazari:%s\n",i+1,yigit[i].yazar);
        printf("%d.kitabin cikis yili:%d\n",i+1,yigit[i].yil); // burada -> typdef isaretiinin yerine bi nokta ile de yap ne degisiyor
    }
   // printf("-----xalas-----\n");
}
void enUstKitap(){  // son eklenen kitabi yani en usttekini ekrana yazdirir
    printf("kitabin adi:%s\n",yigit[top].isim);
    printf("kitabin yazari:%s\n",yigit[top].yazar);
    printf("kitabin cikis yili:%d\n",yigit[top].yil);
}
void kitapSayisi(){
    printf("kitap sayisi:%d\n",top+1);  // top+1 cunku top 0(sıfırdan) basliyor
}

int main(){
    int islem;
/*  for(int i=0; i<BOYUT; i++){
       printf("%d.kitap adini giriniz:",i+1);
       scanf("%s", yigit[i].isim);
       printf("%d.kitabin yazarinin ismi:",i+1);
       scanf("%s", yigit[i].yazar);
       printf("%d.kitabin cikis yilini giriniz:",i+1);
       scanf("%d",&yigit->yil);
       push(yigit[i]);
    }*/
    while(1){
        printf("\n----MENU----\n1.kitap ekle\n2.kitap cikartma\n3.kitaplari listele\n4.en ustteki kitap goster\n5.kitap sayisi\n6.cikis\n");
        printf("seciminizi yapiniz:\n");
        scanf("%d",&islem);       
        if(islem==1){
            kitap yeni;
            printf("kitabin adi: ");
            scanf("%s",yeni.isim);
            printf("kitabin yazari: ");
            scanf("%s",yeni.yazar);
            printf("kitabin basim yili: ");
            scanf("%d",&yeni.yil);
            
            push(yeni);
        }
        if(islem == 2){
          pop();
        }

        if(islem==3){
          kitapListele();
        }
        if(islem == 4){
          enUstKitap();
        }
        if(islem == 5){
           kitapSayisi();
        }
        if(islem == 6){
            printf("cikis yapiliyor...\n");
            printf("listenin guncel hali:\n");
            kitapListele();
            return 0;
        }
    }
  
    return 0;
}
