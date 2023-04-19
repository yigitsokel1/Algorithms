#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>


int* boubleSort(int n, int *array);
void findCommonElements(int n1, int *array1, int n2, int *array2, int n3, int *array3);

int main(){
	
	srand(time(NULL));
	int n1 = 5 + rand() % 5;
	int n2 = 5 + rand() % 5;
	int n3 = 5 + rand() % 5;
	int *arr1, *arr2, *arr3;
	int i;
	
	arr1 = (int*)malloc(n1*sizeof(int));
	arr2 = (int*)malloc(n2*sizeof(int));
	arr3 = (int*)malloc(n3*sizeof(int));
	
	for(i=0; i<n1; i++)
		arr1[i] = 1 + rand() % 20;
	for(i=0; i<n2; i++)
		arr2[i] = 1 + rand() % 20;
	for(i=0; i<n3; i++)
		arr3[i] = 1 + rand() % 20;	
	
	arr1 = boubleSort(n1, arr1);
	arr2 = boubleSort(n2, arr2);
	arr3 = boubleSort(n3, arr3);
	
	printf("Array 1\n");
	for(i=0; i<n1; i++)
		printf("%d  ",arr1[i]);
	
	printf("\nArray 2\n");
	for(i=0; i<n2; i++)
		printf("%d  ",arr2[i]);
		
	printf("\nArray 3\n");
	for(i=0; i<n3; i++)
		printf("%d  ",arr3[i]);
		
	findCommonElements(n1,arr1,n2,arr2,n3,arr3);
	
	return 0;
}



int* boubleSort(int n, int *array){
	
	int i, j;
	int tmp;
	
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


void findCommonElements(int n1, int *array1, int n2, int *array2, int n3, int *array3){
	
	int i=0, j=0, k=0;
	
	printf("\n\nCommon Elements\n");
	while(i<n1 && j<n2 && k<n3){
		if(array1[i] == array2[j] && array2[j] == array3[k]){
			printf("%d\n",array1[i]);
			i++;
			j++;
			k++;
		}
		else if(array1[i] < array2[j])
			i++;
		else if(array2[j] < array3[k])
			j++;
		else
			k++;
	}
	
	
	
	
	
}


