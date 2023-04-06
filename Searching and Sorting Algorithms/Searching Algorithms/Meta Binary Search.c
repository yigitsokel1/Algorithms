#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int metaBinarySearch(int n, int *array, int key);
int* boubleSort(int *array, int size);

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

	result = metaBinarySearch(n, arr, key);
	if(result == -1)
		printf("\nElement is not present in array!");
	else
		printf("\nElement is present at index %d!", result);
	return 0;
	
}


int metaBinarySearch(int n, int *array, int key){

	int lg;
	int i;
	int index;
	int new_index;
	
	lg = log2(n-1) + 1;
	index = 0;
	
	for(i=lg-1; i>=0; i--){
		
		if(array[index] == key)
			return index;
		
		new_index = index | (1<<i);
		
		if(new_index < n && array[new_index] <= key)
			index = new_index;
	}
	if(array[index] == key)
		return index;
	else
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




