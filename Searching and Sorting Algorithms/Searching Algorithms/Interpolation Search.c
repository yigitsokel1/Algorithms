#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int* boubleSort(int *array, int size);
int interpolationSearch(int *array, int size, int number);

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
	
	result = interpolationSearch(arr, n, num);

	if(result < 0){
		printf("\nElement is not present in array!");
	}else{
		printf("\nElement is present at index %d!", result);
	}	
		
	return 0;
}

int interpolationSearch(int *array, int size, int number){
	
	int left, right, mid;
	left = 0;
	right = size - 1;
	
	while(right >= left &&  number >= array[left] && number <= array[right]){
		mid = left + ((number-array[left])*(right-left))/(array[right]-array[left]);
		if(array[mid] == number){
			return mid;
		}
		if(number > array[mid])
			left = mid+1;
		else
			right = mid-1;
	}
	return -1;
	
	
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
