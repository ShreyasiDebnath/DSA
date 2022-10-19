#include<stdio.h>
#include<stdlib.h>
 

struct Node *f = NULL;
struct Node *r = NULL;
 
struct Node
{
    int data;
    struct Node *next;
};

void enqueue(int val){
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
 
int main(){
    int i,val;
    printf("The the number of items you want to enqueue: ");
    scanf("%d",&i);
    while(i--){
	
    printf("\nValue you want to insert: ");
    scanf("%d",&val);
    enqueue(val);
    }
    printf("\nThe number of items you to dequeue: ");
    scanf("%d",&i);
    while(i--){    
    printf("Dequeuing element %d\n", dequeue());
    }
   linkedListTraversal(f);
   
 
   
 
    return 0;
}
