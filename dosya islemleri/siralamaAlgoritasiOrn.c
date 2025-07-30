/*
-Hangi s�ralama y�nteminin se�ilece�i kullan�c�dan al�nmal�d�r.(�rne�in; Se�meli s�ralama i�in 1, Kabarc�k s�ralama i�in 2 )
	-N elemanl� bir dizi olu�turulup say�lar rastgele olu�turulabilir 
	veya kullan�c� taraf�ndan girilebilir. Hangisi olaca�� kullan�c�ya sorulmal�d�r.(Rastgele olu�turmak i�in 1, kullan�c� giri�i i�in 2 giriniz gibi)
	-Dizinin ba�lang��taki hali ve her s�ralama ad�m� sonras� hali ekrana yazd�r�lmal�d�r. c dili sıralamaa algoritmalari
*/
#include<stdio.h>
void secmeli_siralam(int dizi[],int N){
    int i,j,min,temp;
    for(i=0; i<N-1; i++){
        min = i;
        for(j=i+1; j<N;j++){
            if(dizi[j] < dizi[min]){
            min = j;
            }
            temp = dizi[min];
            dizi[min] = dizi[i];
            dizi[i] = temp;
            printf("adim %d: ",i+1);
           for(int k=0; k<N; k++){
              printf("%d ",dizi[k]);
            }
        printf("\n");
            }
        
    }
}

void kabarciSiralama(int dizi[],int N){
    int i,j,temp;
    for(i=0; i<N-1; i++){
        for(j=0; j<N-i-1; j++){
            if(dizi[j] >dizi[j+1]){
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
        printf("adim %d: ",i+1);
        for(int k=0; k<N; k++){
            printf("%d ",dizi[k]);
        }
        printf("\n");
    }
}
