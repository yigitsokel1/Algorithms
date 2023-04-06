#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sentinelLinearSearch(int n, int *array, int key);

int main(){

	int key;
	int *array;
	int n;
	int i;
	
	srand(time(NULL));
	n = 5 + rand() % 5;
	
	array = (int*)malloc(n*sizeof(int));
	
	for(i=0 ; i<n; i++)
		array[i] = 1 + rand() % 200;

	printf("Array\n");
	for(i=0; i<n; i++){
		printf("%d\t", array[i]);
	}
	
	printf("\nEnter the number for searching : ");
	scanf("%d", &key);

	sentinelLinearSearch(n, array, key);

	return 0;
}



void sentinelLinearSearch(int n, int *array, int key){
	
	int last;
	int i=0;
	
	last = array[n-1];
	array[n-1] = key;
	
	while(array[i] != key)
		i++;
	
	array[n-1] = last;
	
	if(i<n-1 || last == key)
		printf("\nElement is present at index %d!", i);
	else
		printf("\nElement is not present in array!");
	
	
	
	
	
}
