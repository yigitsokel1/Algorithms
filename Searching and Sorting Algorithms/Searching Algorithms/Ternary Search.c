#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int* boubleSort(int *array, int size);


int main(){
	
	int *arr;
	int n, key, result;
	int i;
	
	srand(time(NULL));
	n = 5 + rand() % 5;
	
	arr = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++){
		arr[i] = 1 + rand() % 200;
	}	
	
	arr = boubleSort(arr, n);
	printf("Array\n");
	for(i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	
	printf("\nEnter the number for searching : ");
	scanf("%d", &key);
	
	
	result = ternarySearch(arr, key, 0, n-1);
	
	if(result != -1)
		printf("\nElement is present at index %d!", result);
	else
		printf("\nElement is not present in array!");
	return 0;
	
}


int ternarySearch(int *array, int key, int left, int right){
	
	if(left<=right){
		
		int mid1, mid2;
		
		mid1 = left + (right-left)/3;
		mid2 = right - (right-left)/3;
		
		
		if(array[mid1] == key)
			return mid1;
		if(array[mid2] == key)
			return mid2;
			
		if(key < array[mid1])
			return ternarySearch(array,key,left,mid1-1);
		else if(key > array[mid2])
			return ternarySearch(array,key,mid2+1,right);
		else
			return ternarySearch(array,key,mid1+1,mid2-1);		
		
	}else 
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




