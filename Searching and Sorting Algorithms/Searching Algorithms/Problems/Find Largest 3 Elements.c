#include<stdio.h>
#include <limits.h>
#include<time.h>

void large3Element(int array[], int n);

int main(){
	
	int n;
	srand(time(NULL));
	int i;
	
	n = 5 + rand() % 5;
	int array[n];
	
	for(i=0;i<n;i++)
		array[i] = 1 + rand() % 100;
	printf("Array\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);	
	large3Element(array,n);
	
	return 0;
}

void large3Element(int array[], int n){
	
	int first = INT_MIN, second = INT_MIN, third = INT_MIN;
	int i;
	
	for(i=0; i<n; i++){
		if(array[i] > first){
			third = second;
			second = first;
			first = array[i];
		}
		else if(array[i] > second){
			third = second;
			second = array[i];
		}
		else if(array[i] > third)
			third = array[i];
	}
	
	printf("\n1.Largest number : %d\n2.Largest number : %d\n3.Largest number : %d\n",first,second,third);
	
}

