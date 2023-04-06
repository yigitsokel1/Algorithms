#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void linearSearch(int size, int *array, int number);

int main(){
	
	int *arr;
	int n, num;
	int i;
	
	srand(time(NULL));
	n = 5 + rand() % 5;
	
	arr = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++){
		arr[i] = 1 + rand() % 200;
	}	
	
	printf("Array\n");
	for(i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	
	printf("\nEnter the number for searching : ");
	scanf("%d", &num);
	
	linearSearch(n, arr, num);
	
	return 0;
	
}

void linearSearch(int size, int *array, int number){
	
	int i = 0;
	while(array[i] != number && i != size){
		i++;
	}		
	if(i==size){
		printf("\nElement is not present in array!");
	}else{
		printf("\nElement is present at index %d!", i);
	}
	
	
}
