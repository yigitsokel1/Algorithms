#include<stdio.h>
#include<math.h>
#include<time.h>

void findPair(int array[], int n, int diff);

int main(){
	
	srand(time(NULL));
	int n = 5 + rand() % 5;
	int arr[n];
	int i;
	int inp;
	
	for(i=0; i<n; i++)
		arr[i] = 1 + rand() % 100;
		
	printf("Array\n");
	for(i=0; i<n; i++)
		printf("%d  ", arr[i]);
		
	printf("\nEnter the difference : ");
	scanf("%d", &inp);
	
	findPair(arr, n, inp);
	
	return 0;
	
}

void findPair(int array[], int n, int diff){
	
	int i=0, j;
	int control = 0;
	
	while(i<n-1 && !control){
		j = i+1;
		while(j<n && !control){
			if(abs(array[i] - array[j]) == diff){
				printf("Pair Found : (%d, %d)\n", array[i], array[j]);
				control = 1; 
			}
			j++;
		}
		i++;
	}
	
	if(!control)
		printf("No Such Pair!\n");
	
}

