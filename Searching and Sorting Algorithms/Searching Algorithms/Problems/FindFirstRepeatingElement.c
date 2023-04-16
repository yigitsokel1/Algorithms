#include<stdio.h>
#include <limits.h>
#include<time.h>

int findFirstRepeatingElement(int array[], int n);

int main(){
	
	int n;
	srand(time(NULL));
	int i;
	int x;
	
	n = 5 + rand() % 5;
	int array[n];
	
	for(i=0;i<n;i++)
		array[i] = 1 + rand() % 20;
	printf("Array\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);	
	x = findFirstRepeatingElement(array,n);
	if(x != -1)
		printf("\nFirst Repeating Element in Integer Array : %d", x);
	else
		printf("\nRepeating Element is Not Exist!\n");
	
	return 0;
}

int findFirstRepeatingElement(int array[], int n){
	
	int i, j;
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(array[i] == array[j])
				return array[i];			
		}
	}
	return -1;
	
}
  	
