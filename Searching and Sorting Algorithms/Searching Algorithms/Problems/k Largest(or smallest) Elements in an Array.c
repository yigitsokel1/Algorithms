#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void largestAndSmallestElements(int n, int *array, int k);
int* boubleSort(int n, int *array); 



int main(){
	
	srand(time(NULL));
	int n = 10 + rand() % 5;
	int *arr = (int*)malloc(n*sizeof(int));
	int k;
	int i;
	
	for(i=0; i<n; i++)
		arr[i] = 1 + rand() % 100;
	
	k = 1 + rand() % 5;	
	printf("Array\n");
	for(i=0; i<n; i++)
		printf("%d  ", arr[i]);
	printf(",K = %d", k); 
	
	arr = boubleSort(n, arr);
	largestAndSmallestElements(n, arr, k);
		
	return 0;
	
}


int* boubleSort(int n, int *array){
	
	int i, j;
	int tmp;
	
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(array[j] > array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}

	return array;	
}

void largestAndSmallestElements(int n, int *array, int k){
	
	int i;
	printf("\nSmallest Elements\n");
	for(i=0; i<k; i++)
		printf("%d  ", array[i]);
	printf("\nLargest Elements\n");
	for(i=n-1; i>n-k-1; i--)
		printf("%d  ", array[i]);
	
	
}




