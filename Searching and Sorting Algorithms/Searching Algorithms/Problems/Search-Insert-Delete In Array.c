#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>


int* boubleSort(int n, int* array);
void menu();
int deleteElement(int n, int *array);
int addElement(int n, int *array);
void binarySearch(int n, int *array);


int main(){
	
	srand(time(NULL));
	int n = 5 + rand() % 5;
	int *arr;
	int i, j;
	int selection;
	
	arr = (int*)malloc(sizeof(int));
	
	for(i=0; i<n; i++)
		arr[i] = 1 + rand() % 200;
		
	printf("Array\n");
	for(i=0; i<n; i++)
		printf("%d  ",arr[i]);
	
	arr = boubleSort(n, arr);
	printf("\nSorted Array\n");
	for(i=0; i<n; i++)
		printf("%d  ",arr[i]);
		
		
	do{
		menu();
		scanf("%d", &selection);
		
		if(selection == 1)
			n = addElement(n, arr);
		else if(selection == 2)
			n = deleteElement(n, arr);
		else if(selection == 3)
			binarySearch(n, arr);
		else if(selection == 4){
			printf("\nArray\n");
			for(i=0; i<n; i++)
				printf("%d  ",arr[i]);
		}
		else if(selection == 5)
			printf("Program terminated!\n");
		else
			printf("Wrong selection! Try Again!\n\n");
	}while(selection != 5);
	
	return 0;
}


void menu(){
	
	printf("\n\nMenu\n");
	printf("1.Insert Element\n");
	printf("2.Delete Element\n");
	printf("3.Search ELement\n");
	printf("4.Show Array\n");
	printf("5. Quit\n");
	printf("Selection : ");
	
}

int* boubleSort(int n, int* array){
	
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

int addElement(int n, int *array){
	
	int newElement;
	int i = 0, j;
	int tmp;
	
	printf("Please enter the element you want to add : ");
	scanf("%d", &newElement);

	array = (int*)realloc(array, (n+1)*sizeof(int));
	
	while(i<n && newElement>array[i])
		i++;
	if(i==n)
		array[i] = newElement;
	else{
		for(j=n; j>i; j--)
			array[j] = array[j-1];
		array[i] = newElement;	
	}
	printf("Element is added!\n");
	return n+1;
	
}


int deleteElement(int n, int *array){
	
	int del;
	int i = 0, j;
	
	printf("Please enter the element you want to delete : ");
	scanf("%d", &del);
	
	while(i<n && array[i] != del)
		i++;
	
	if(i==n){
		printf("Element is not found!\n");
		return n;
	}else{
		for(j=i; j<n-1; j++)
			array[j] = array[j+1];
		array = (int*)realloc(array,(n-1)*sizeof(int));
		printf("Element is deleted!\n");
		return n-1;
	}
	
	
}

void binarySearch(int n, int *array){
	
	int left = 0;
	int right = n-1;
	int mid = (left+right)/2;
	int srch;
	
	printf("Please enter the element you want to search : ");
	scanf("%d", &srch);
	
	while(right >= left && array[mid] != srch){
		if(srch > array[mid])
			left = mid + 1;
		else
			right = mid-1;	
		mid = (left+right)/2;	
	}
	
	if(array[mid] == srch)
		printf("\nElement is present at index %d!\n", mid);
	else
		printf("\nElement is not present in array!");

}
