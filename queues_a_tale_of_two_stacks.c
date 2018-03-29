#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct node_t {
    int data;
    struct node_t *next;
} NODE;

typedef struct queue_t {
    NODE *head;
    NODE *tail;
    int c_size;
} QUEUE;

QUEUE *build_queue (){
    QUEUE *q = (QUEUE*) malloc(sizeof(QUEUE));
    q->head = NULL;
    q->tail = NULL;
    q->c_size = 0;
    
    return q;
}

void enqueue (QUEUE *q, int v){
    NODE *n = (NODE*) malloc(sizeof (NODE));
    n->data = v;
    n->next = NULL;
    
    if (q->c_size == 0){
        q->head = n;
        q->tail = n;
    } else {
        q->tail->next = n;
        q->tail = n;
    }
    q->c_size++;
}

int dequeue (QUEUE *q){
    int ans = q->head->data;
    
    if (q->c_size == 0){
        return NULL;
    }
    
    q->head = q->head->next;
    q->c_size--;
    
    return ans;
}

int peek (QUEUE *q){
    return q->head->data;
}

int main() {
    int n;
    scanf("%d", &n);
    QUEUE *q = build_queue();
    int op;
    int val;
    for(int i=0;i<n;i++){
         scanf("%d", &op);
        if (op == 1){
            scanf("%d", &val);
            enqueue(q,val);
        } else if (op==2){
            dequeue(q);
        } else if (op==3){
            printf("%d\n",peek(q));
        }
        
    } 
    return 0;
}
