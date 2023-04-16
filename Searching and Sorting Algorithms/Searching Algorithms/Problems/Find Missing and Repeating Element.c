#include<stdio.h>

void findMissingandRepeatingElement(int n, int array[]);

int main(int argc, char** argv) {
  	
    int A[] = { 8, 1, 5, 3, 4, 2, 6, 7, 2, 13 };
	int n = sizeof(A)/sizeof(A[0]);
	int i, j, tmp;	
	
	printf("Array\n");
	for(i=0; i<n; i++)
		printf("%d  ",A[i]);
	
	for(i=0;i<n-1;i++){						//Bouble Sort
		for(j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp;
			}
		}
	}
	
		
   	findMissingandRepeatingElement(n, A);
        
	return 0;

}

void findMissingandRepeatingElement(int n, int array[]){
	
	
	int tmp=1;
	int control = 0;
	int i, j;
	    
	while(tmp < n){
		if(array[tmp] - array[tmp-1] != 1 && array[tmp] - array[tmp-1] != 0){
			if(!control)
				printf("\nThe missing number(s) between %d to %d is\n",array[0], array[n-1]);
			control = 1;
			for(i=array[tmp-1]+1; i<array[tmp]; i++)
				printf("%d\t",i);
		}
		tmp++;	
	}
		
		if(!control)
			printf("\nNot Exist Missing Number!\n");
	
	control = 0;		
	i = 0;
	while(i<n && !control){
		j = i+1;
		while(j<n && !control){
			if(array[i] == array[j]){
				printf("\nFirst Repeating Element in Integer Array : %d\n", array[i]);
				control = 1;
			}
			j++;
		}
		i++;
	}
	if(!control)
		printf("\nNot Exist Repeating Element!\n");		
	
			
}

