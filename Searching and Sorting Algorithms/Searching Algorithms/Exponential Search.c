#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

void exponentialSearch(int *array, int size, int number);
void binarySearch(int *array, int first, int last, int number);
int* boubleSort(int *array, int size);

int main(){
	
	srand(time(NULL));
	int *arr;
	int n, num, result;
	int i;
	
	n = 5 + rand() % 21;
	arr = (int*)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++){
		arr[i] = 1 + rand() % 200;
	}
	arr = boubleSort(arr, n);
	printf("Array\n");
	for(i=0; i<n; i++){
		printf("%d  ", arr[i]);
	}
	
	printf("\nEnter the number for searching : ");
	scanf("%d", &num);
	
	exponentialSearch(arr, n, num);
	
	return 0;
	
}

void exponentialSearch(int *array, int size, int number){
	
	int i = 1;
	
	if(array[0] == number){
		printf("\nElement is present at index 0!");
	}
	
	while(i<size && array[i] <= number){
		i = i*2;
	}
	
	if(i < size - 1){
		binarySearch(array,i/2,i,number);
	}else{
		binarySearch(array,i/2,size-1,number);
	}
	
	
}

void binarySearch(int *array, int first, int last, int number){
	
	int mid;
	
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
	else if(mid != 0)
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
