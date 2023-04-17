#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<limits.h>

void sumClosestZero(int n, int array[]);


int main(){
	
	srand(time(NULL));
	int n = 5 + rand() % 5;
	int arr[n];
	int i;
	
	for(i=0; i<n; i++)
		arr[i] = 100 - rand() % 200;
		
	printf("Array\n");
	for(i=0; i<n; i++)
		printf("%d  ", arr[i]);
	
	sumClosestZero(n, arr);
	
	return 0;
}

void sumClosestZero(int n, int array[]){
	
	int i, j;
	int minEl1, minEl2, minSum = INT_MAX;
	
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(abs(array[i] + array[j]) < minSum){
				minEl1 = array[i];
				minEl2 = array[j];
				minSum = abs(array[i] +array[j]);
			}
		}
	}
	
	printf("\nThe two elements whose sum is minimum are %d and %d, sum: %d",minEl1, minEl2, minSum);
	
	
}
