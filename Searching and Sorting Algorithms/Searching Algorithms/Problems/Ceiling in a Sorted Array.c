#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int* boubleSort(int n, int *array);
void ceilSearch(int n, int *array, int x);

int main(){
	
	srand(time(NULL));
	int n = 5 + rand() % 10;
	int *arr = (int*)malloc(n*sizeof(int));
	int i;
	int ceilTmp;
	
	for(i=0; i<n; i++)
		arr[i] = 1 + rand() % 40;
	
	arr = boubleSort(n, arr);
	
	printf("Array\n");
	for(i=0; i<n; i++)
		printf("%d  ",arr[i]);
		
	printf("\nEnter the value : ");
	scanf("%d", &ceilTmp);
	
	ceilSearch(n, arr, ceilTmp);
	
	return 0;
	
}

void ceilSearch(int n, int *array, int x){
	
	int curr=0;
	
	while(x > array[curr] && curr < n)
		curr++; 
	
	if(curr < n)
		printf("Ceiling of %d is %d", x, array[curr]);	
	else
		printf("Ceiling of %d doesn't exist in array ", x);	
		
	
	
		
	
}


int* boubleSort(int n, int *array){
	
	int i, j, tmp;
	
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


