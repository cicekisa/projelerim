#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
 /*  FILE* fptr;
  fptr = fopen("c:\\data.txt\\data.txt","a");

  if(fptr==NULL)
    printf("File open unsuccesful!\n");
  
  else{
    putc('\n',fptr);
    putc('A',fptr);  
    putc('\n',fptr);
    putc('B',fptr);
    putc('\n',fptr);
    putc('C',fptr);
    printf("data is  written to file\n");
  }
    fclose(fptr);
*/
FILE* fptr;
  fptr = fopen("data.txt","w");
  char name;
  if(fptr==NULL)
    printf("File open unsuccesful!\n"); // dosya açılamadı

  else{
    for(name='a'; name<='z'; name++){
       putc(name,fptr);
       putc('\n',fptr); //  bu satirin amaci yerlestirilen harflerin birer satir alta girmesini saglar
    }
    printf("Data is written to file\n");
  }
    fclose(fptr);

    return 0;
}
