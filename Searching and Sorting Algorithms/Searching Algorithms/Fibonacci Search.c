#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibonacciSearch(int n, int *array, int key);
int* boubleSort(int *array, int size);
int min(int a, int b);


int main(){

	int key, result;
	int *arr;
	int n;
	int i;
	
	srand(time(NULL));
	n = 5 + rand() % 5;
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i=0 ; i<n; i++)
		arr[i] = 1 + rand() % 200;

	arr = boubleSort(arr, n);
	printf("Array\n");
	for(i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	
	printf("\nEnter the number for searching : ");
	scanf("%d", &key);

	result = fibonacciSearch(n, arr, key);
	if(result == -1)
		printf("\nElement is not present in array!");
	else
		printf("\nElement is present at index %d!", result);
	return 0;
	
}


int fibonacciSearch(int n, int *array, int key){
	
	int fibonacci1, fibonacci2, fibonacci3;
	int offset;
	int index;
	
	fibonacci1 = 0;
	fibonacci2 = 1;
	fibonacci3 = fibonacci1 + fibonacci2;
	
	while(fibonacci3 < n){
		fibonacci1 = fibonacci2;
		fibonacci2 = fibonacci3;
		fibonacci3 = fibonacci1 + fibonacci2;
	
	}
	
	offset = -1;
	
	while(fibonacci3 > 1){
		
		index = min(fibonacci1+offset, n-1);
		
		if(key < array[index]){
			fibonacci3 = fibonacci1;
			fibonacci2 = fibonacci2-fibonacci1;
			fibonacci1 = fibonacci3 - fibonacci2;
		}else if(key > array[index]){
			fibonacci3 = fibonacci2;
			fibonacci2 = fibonacci1;
			fibonacci1 = fibonacci3 - fibonacci2;
			offset = index;
		}else
			return index;
		
	}
	
	if(fibonacci2 && array[offset+1] == key)
		return offset+1;
	
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


int min(int a, int b){
	if(a<b)
		return a;
	else
		return b;
}


