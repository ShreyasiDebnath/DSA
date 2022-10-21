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
            n->next=f;
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
    	r->next=f->next;
        f = f->next;
        
        val = ptr->data;
        free(ptr);
    }
    return val;
}

void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr->next != f)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("Element: %d\n", r->data);
}
 
int main(){
    int i,val;
   
    
    int ch;
   
    do
    {
        printf("\n1.ENQUEUE 2.DEQUEUE 3.DISPLAY 4.EXIT");
        printf("\nEnter choice :");
        scanf("\n%d",&ch);
        switch (ch)
        {
        case 1:
            
			
		    printf("\nValue you want to insert: ");
		    scanf("%d",&val);
		    enqueue(val);
            break;
        case 2:
            printf("\nThe number of items you to dequeue: ");
		    scanf("%d",&i);
		    while(i--){    
		    printf("Dequeuing element %d\n", dequeue());
		    }
   
            break;
        case 3:
            linkedListTraversal(f);
            break;
        case 4:
            printf("\nExit");
            break;
        default:
            printf("\nINVALID CHOICE !!");
            break;
        }
    }while(ch!=4);
 
   
 
    return 0;
}
