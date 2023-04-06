#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int* boubleSort(int *array, int size);
void binarySearch(int *array, int size, int number);

int main(){
	
	int *arr;
	int n, num;
	int i;
	
	srand(time(NULL));
	n = 5 + rand() % 5;
	arr = (int*) malloc(n*sizeof(int));
	
	for(i=0; i<n; i++){
		arr[i] = 1 + rand() % 100;
	}
	
	arr = boubleSort(arr, n);
	printf("Array\n");
	for(i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	
	printf("\nEnter the number for searching : ");
	scanf("%d", &num);
	
	binarySearch(arr, n, num);
	
	return 0;
	
}

void binarySearch(int *array, int size, int number){
	
	int first, last, mid;
	
	first=0;
	last = size-1;
	mid = (first+last)/2;
	
	while(last >= first && array[mid] != number){
		if(number > array[mid])
			first = mid+1;
		else
			last = mid-1;
		mid = (first+last)/2;
	}
	
	if(first > last)
		printf("\nElement is not present in array!");
	else
		printf("\nElement is present at index %d!", mid);
	
		
}

int* boubleSort(int *array, int size){
	
	int i, j, tmp;
	
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(array[j]>array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}
	
	return array;
}



