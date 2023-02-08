// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

void bubble_sort(int ar[],int n){
    int arr[n];
    int y;
    for(y=0;y<n;y++) arr[y]=ar[y];
    int i=0;
    int flag;
    for(i=0;i<n;i++){
        int j;
        flag=1;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
        if(flag) break;
        printf("After %d pass: ",i+1);
        int k;
        for(k=0;k<n;k++) printf("%d ",arr[k]);
        printf("\n");
    }
    printf("Final: ");
     int k;
     for(k=0;k<n;k++) printf("%d ",arr[k]);
     printf("\n");
    
}
void selection_sort(int ar[],int n){
    int arr[n];
    int y;
    for(y=0;y<n;y++) arr[y]=ar[y];
    int i=0;
    for(i=0;i<n-1;i++){
        int low=i,j;
        //printf("\nlow: %d",arr[low]);
        for(j=low+1;j<n;j++){
            if(arr[low]>arr[j]){
                low=j;
               // printf("\nnewlow: %d",arr[low]);
            }
            
        }
            if(low!=i){
                int temp=arr[low];
                arr[low]=arr[i];
                arr[i]=temp;}
               
            
        
        
        printf("After %d pass: ",i+1);
        int k;
        for(k=0;k<n;k++) printf("%d ",arr[k]);
        printf("\n");
    }
    printf("Final: ");
     int k;
     for(k=0;k<n;k++) printf("%d ",arr[k]);
     printf("\n");
    
}

int main() {
    int n,choice,i;
    printf("Enter the number of elements you want to sort : ");
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&ar[i]);
    }
    printf("Please select any option given below for sorting: \n");
    while(1){
    printf("\n1.Insertion Sort 2.Selection Sort 3.Bubble Sort  4.Exit\n");
    printf("\n Enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
           // insertion_sort(arr,n);
            break;
        case 2:
            printf("Unsorted array: ");
            for(i=0;i<n;i++){
            printf(" %d",ar[i]);
        }
            printf("\n");
            selection_sort(ar,n);
            break;
        case 3:
             printf("Unsorted array: ");
                for(i=0;i<n;i++){
                printf(" %d",ar[i]);
            }
            printf("\n");
            bubble_sort(ar,n);
            break;
        case 4:
            return 0;
       default:
            printf("\nPlease select only 1-4 option\n ");
    }
    }

    return 0;
}
