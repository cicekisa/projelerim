#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

typedef struct {
    int data[MAX];
    int front, rear, size;
} Queue;

// Stack Fonksiyonları
void initStack(Stack *s) {
    s->top = -1;
}

int isStackEmpty(Stack *s) {
    return s->top == -1;
}

int isStackFull(Stack *s) {
    return s->top == MAX -1;
}

void push(Stack *s, int val) {
    if (isStackFull(s)) {
        printf("Stack dolu!\n");
        return;
    }
    s->data[++(s->top)] = val;
}

int pop(Stack *s) {
    if (isStackEmpty(s)) {
        printf("Stack boş!\n");
        return -1;
    }
    return s->data[(s->top)--];
}

// Queue Fonksiyonları
void initQueue(Queue *q) {
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

int isQueueEmpty(Queue *q) {
    return q->size == 0;
}

int isQueueFull(Queue *q) {
    return q->size == MAX;
}

void enqueue(Queue *q, int val) {
    if (isQueueFull(q)) {
        printf("Kuyruk dolu!\n");
        return;
    }
    q->rear = (q->rear + 1) % MAX;
    q->data[q->rear] = val;
    q->size++;
}

int dequeue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Kuyruk boş!\n");
        return -1;
    }
    int val = q->data[q->front];
    q->front = (q->front + 1) % MAX;
    q->size--;
    return val;
}

void printStack(Stack *s) {
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

void printQueue(Queue *q) {
    int count = q->size;
    int i = q->front;
    while(count--) {
        printf("%d ", q->data[i]);
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    Stack mainStack, tempStack;
    Queue queue;

    initStack(&mainStack);
    initStack(&tempStack);
    initQueue(&queue);

    // Yığıta veri ekleme (örnek)
    push(&mainStack, 10);
    push(&mainStack, 20);
    push(&mainStack, 30);
    push(&mainStack, 40);
    push(&mainStack, 50);

    printf("Başlangıç Yığıtı: ");
    printStack(&mainStack);

    // 3 adet veri yığıttan alınacak ve kuyruğa aktarılacak
    int N = 3;

    // Adım 1: Yığıttan N veri çıkar ve geçici yığıta koy (sıralamayı korumak için)
    for(int i=0; i<N; i++) {
        int val = pop(&mainStack);
        if (val != -1) {
            push(&tempStack, val);
        }
    }

    // Adım 2: Geçici yığıttan verileri çıkar ve kuyruğa ekle
    while(!isStackEmpty(&tempStack)) {
        int val = pop(&tempStack);
        enqueue(&queue, val);
    }

    printf("Yığıt (aktarım sonrası): ");
    printStack(&mainStack);

    printf("Kuyruk: ");
    printQueue(&queue);

    return 0;
}
