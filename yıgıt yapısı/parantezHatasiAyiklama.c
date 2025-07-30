/*Girilen bir aritmetiksel ifadede parantez hatası olup olmadığını yığıt 
kullanarak bulunuz.(Örneğin; (2+3)*((8-4)/2) şeklinde verilen bir ifade 
için her açma parantezi ‘(’geldiğinde yığıta bu parantez eklenir, kapama 
parantezi ‘)’ geldiğinde yığıttan bir çekme işlemi yapılır. En son 
durumda yığıt boş ise hata yoktur)*/

#include <stdio.h>
#include <string.h>

#define MAX 100
char yigit[MAX];
int top = -1;

void push(char x){
    if(top < MAX-1)
       yigit[++top] = x;
    else
       printf("Yigit dolu!\n");
}

char pop(){
    if(top >= 0)
      return yigit[top--];
    return '\0';  
}
int parantezKontrol(char *metin){
    for(int i=0; i<strlen(metin); i++){
        if(metin[i] == '(' || metin[i] == '{' || metin[i] == '[')
          push(metin[i]);

        else if(metin[i] == ')' || metin[i] == '}' || metin[i] == ']'){
            if(top == -1)
               return 0;
          char ust = pop();   
          if(metin[i] == '(' &&  metin[i] == ')' ||
             metin[i] == '{' &&  metin[i] == '}' || 
             metin[i] == '[' &&  metin[i] == ']'){
                return 0;
             }
        }
       
        }
    
    return top == -1;
}
int main(){
   char metin[MAX];
    printf("girilecek ifadeyi giriniz: ");
    scanf("%s",metin);

    if(parantezKontrol(metin))
       printf("parantezler dengelidir ve dogru bir sekilde yazilmistir\n");
    else
       printf("parantezler dengeli degildir\n");   

    return 0;
}