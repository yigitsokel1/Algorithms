#include <stdio.h>
#include<time.h>
#define SIZE 100

void findCount1(int n, int array[]);

int main(int argc, char** argv) {
  	
  	srand(time(NULL));
  	int n = 5 + rand() % 10;
    int arr[SIZE];
    int i;
    
    for(i=0; i<n; i++)
		arr[i] = rand() % 2;
	
	printf("Array\n");
	for(i=0; i<n; i++)
		printf("%d  ",arr[i]);
        
    findCount1(n, arr);
    
	return 0;

}

void findCount1(int n, int array[]){
	
	int count=0;
	int i;
	
	for(i=0; i<n; i++){
		if(array[i] == 1)
			count++;
	}
	
	printf("\nCount of 1's in given array is %d", count);
	
}
