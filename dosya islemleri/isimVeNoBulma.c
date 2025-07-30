#include <stdio.h>
 /*
 void main(){
     FILE *dd;
     char ad[20],devam;
     int no;
     dd = fopen("c:\\adlar\\adlara.txt","w");
        if(dd==NULL)
          printf("surucu bulunamadi!\n");
        else{
            while(1){
                printf("Adi:");
                scanf("%s",ad);
                printf("numarasi:");
                scanf("%d",&no);
                fprintf(dd,"%s\t%5d\n",ad,no);
                printf("\nDevam etmek istiyor musunuz:");
                devam = getch();
                if(devam=='h')break;  // kullanıcının girdiği 'e' ya da 'h' karakterini alır.
                      printf("\n");  // Kullanıcının Enter tuşuna bastığında bu girişi de yakalayarak işleme devam etmesi
                                    // için bir ekstra getchar() çağrısı daha yapılır  
            }
            fclose(dd);
            printf("\n");
        }
 }
*/
#include <stdio.h>
void main(){
    FILE *dd;
    char ad[20],devam;
    int no;
    dd = fopen("d:\\adlar.txt","a");
       if(dd==NULL)
         printf("surucu bulunamadi.\n");
       else{
        while(1){
            printf("Adi:");
            scanf("%s",ad);
            printf("Numarasi:");
            scanf("%s",&no);
            fprintf(dd,"%s\t%5d\n",ad,no);
            printf("\n Devam Etmek İstiyor Musunuz:");

            devam = getche();
            if(devam =='h'){
              break;
              printf("\n");
             }
             fclose(dd);
             printf("\n");
       }  
}