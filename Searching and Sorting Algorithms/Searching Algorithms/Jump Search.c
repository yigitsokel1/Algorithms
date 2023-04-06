#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int* boubleSort(int *array, int size);
int jumpSearch(int *array, int size, int number);

int main(){
	
	int *arr;
	int n, num, result;
	int i;
	srand(time(NULL));
	
	n = 10 + rand() % 16;
	arr = (int*)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++){
		arr[i] = 1 + rand() % 500;
	}
	
	arr = boubleSort(arr, n);
	printf("Array\n");
	for(i=0; i<n; i++){
		printf("%d  ", arr[i]);
	}
	
	printf("\nEnter the number for searching : ");
	scanf("%d", &num);
	
	result = jumpSearch(arr, n, num);
	if(result < 0){
		printf("\nElement is not present in array!");
	}else{
		printf("\nElement is present at index %d!", result);
	}
	
	return 0;
	
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

int jumpSearch(int *array, int size, int number){
	
	int jumpDif;
	int low=0, high;
	
	jumpDif = sqrt(size);
	high = low + jumpDif;
	
	while(number > array[high-1]){
		low = high;
		high += jumpDif;
		if(low >= size)
			return -1;
	}
	
	while(array[low] != number){
		low++;
		if(low == high)
			return -1;
	}
	return low;
	
}
