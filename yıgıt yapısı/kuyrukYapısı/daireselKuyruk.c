/*
Dizi kullanarak dairesel kuyruk uygulaması
*/
#include <stdio.h>
#include <stdlib.h>

#define BOYUT 5
int Kuyruk[BOYUT];
int ilk=-1,son=-1;

int DoluMu(){ // isFULL
    if( (ilk==0 && son==BOYUT-1) || ilk==son+1 ) 
    //2.yöntem: if ((son + 1) % BOYUT == ilk)
        return 1;
    return 0;
}
int BosMu(){ // isEmpty
    if(ilk==-1)
        return 1;
    return 0;
}

//Ekleme fonksiyonu
void Enqueue(int x){
    if(DoluMu()){
        printf("Kuyruk DOLU!");
        return;
    }
    if(ilk==-1) //if(BosMu()==1)
        ilk=0;
    
	/*Dairesel kuyrukta dizinin son indeksini geçerse tekrar ilk başa 0.indekse dönmesi için:
	//1.yöntem:
	son++;
    if(son==BOYUT)
        son=0;
    */
    
    //2.yöntem Boyuta göre mod alma:
    son=(son+1)%BOYUT;
    
    Kuyruk[son]=x;
    printf("%d eklendi.\n",x);
}

//Çıkarma
void Dequeue(){
    if(BosMu()){
        printf("Kuyruk BOS!");
        return;
    }
    int cikan=Kuyruk[ilk];
        
    if(ilk==son){
        ilk=-1;
        son=-1;
    }
    else{
    	ilk=(ilk+1)%BOYUT; //dizi boyutunu aşınca tekrar başa dönmesi için (dairesel kuyruk)
    	
    	//2.yöntem:
    	/*
		ilk++;
    	if(ilk==BOYUT)
    		ilk=0;
    	*/
	}
        
    printf("%d cikarildi.\n",cikan);
}

void Listele(){
    if(BosMu()){
        printf("Kuyrukta eleman yok!");
        return;
    }
    printf("Kuyruk elemanlari:");
    int i = ilk;
   while (1) {
        printf("%d ",Kuyruk[i]);
        if(i==son) 
			break;
        i=(i+1)%BOYUT;
    }
    printf("\n");
}

int main() {

    Enqueue(4);
    Enqueue(9);
    Enqueue(12);
    Enqueue(15);
    Enqueue(16);
    Enqueue(25);
    Listele();    
    Dequeue();
    Dequeue();
    Listele();
    Enqueue(2);
    Enqueue(3);
    Listele();
    Dequeue();
    Dequeue();
    Listele();
    
}