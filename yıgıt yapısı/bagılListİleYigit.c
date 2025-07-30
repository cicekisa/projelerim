#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

int push(int data){
    // stack bos mu
    if(top == NULL){
        struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    new->data = data;
    new->next = NULL;
    top =  new; 
    }
    else{
        struct Node *new = (struct Node*)malloc(sizeof(struct Node));
     new->data = data;
     // new->next = NULL;  alltaki new->next bunun yerini alıyor
     new->next = top; // en ustteki elemanın yerine geciyor
    top = new;
    }
    return 1;
}
void pop(){
    if(top == NULL){
        printf("stack bos.\n");
        return 1;
    }
    struct Node *temp = top;
    top = top->next;
    free(temp);
    return 1;
}
void display(){
    if(top == NULL){
        printf("stack bos.\n");
        return 1;
    }
    struct Node *gecici = top;
    while(gecici !=NULL){
        printf("%d- ",gecici->data);
        gecici = gecici->next;
    }  printf("\n");

}

int main() {
    push(1);
    push(2);
    push(4);
    display();
    pop();
    display(),
    pop();
    pop();
    display();
    push(10);
    push (12);
    display();
    

    return 0;
} 