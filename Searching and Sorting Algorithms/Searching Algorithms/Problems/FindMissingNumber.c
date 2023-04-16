#include <stdio.h>


void findMissingNumber(int n, int array[]);

int main(int argc, char** argv) {
  	
    int A[] = { 3, 4, 6, 7, 9, 10, 14 };
	int n = sizeof(A)/sizeof(A[0]);
		
    findMissingNumber(n,A);    
        
	return 0;

}

void findMissingNumber(int n, int array[]){
	
	
	int tmp=1;
	int control = 0;
	int i;
	    
		while(tmp < n){
			if(array[tmp] - array[tmp-1] != 1){
				if(!control)
					printf("\nThe missing number(s) between %d to %d is\n",array[0], array[n-1]);
				control = 1;
				for(i=array[tmp-1]+1; i<array[tmp]; i++)
					printf("%d\t",i);
			}
			tmp++;	
		}
			
		if(!control)
			printf("\nNot Exist Missing Number!");
}



  	
