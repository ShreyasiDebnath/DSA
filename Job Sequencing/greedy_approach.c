// C program for the above approach

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

 struct Job {

	char id[10]; 
	int dead; 
	int profit; 
} ;


int compare(struct Job a, struct Job b)
{
	return (b.profit - a.profit);
}

int min(int num1, int num2){
	return (num1 > num2) ? num2 : num1;
}
void printJobScheduling(struct Job arr[], int n)
{
	qsort(arr, n, sizeof(struct Job), compare);

	int result[n]; 
	bool slot[n]; 
	int i,j;
	for ( i = 0; i < n; i++)
		slot[i] = false;

	for ( i = 0; i < n; i++) {
	
	
		for ( j = min(n, arr[i].dead) - 1; j >= 0; j--) {
		
		
			if (slot[j] == false) {
				result[j] = i;
				slot[j] = true; 
				break;
			}
		}
	}

 int totalprofit=0;
	for ( i = 0; i < n; i++){
		if (slot[i]){
		
			printf("%s ", arr[result[i]].id);
			totalprofit=totalprofit+arr[result[i]].profit;}
		}
		printf("\nTotal Profit: %d",totalprofit);
}


int main()
{
	int n;
	printf("No. of jobs: ");
	scanf("%d",&n);
	struct Job arr[n];
	int i,j;
	for(i=0;i<n;i++){
		printf("**********JOB NO.:%d **********",i+1);
		printf("\nJob Name: ");
		scanf("%s",&arr[i].id);
		printf("Deadline: ");
		scanf("%d",&arr[i].dead);
		printf("Profit: ");
		scanf("%d",&arr[i].profit);
		
	}

	printf(
		"Following is maximum profit sequence of jobs \n");

	printJobScheduling(arr, n);
	return 0;
}


