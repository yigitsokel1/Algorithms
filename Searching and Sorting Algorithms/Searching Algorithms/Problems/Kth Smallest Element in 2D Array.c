#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>


typedef struct Node{
	int value;
	struct Node *next;
}NODE;

NODE* matrixToLinkedList(NODE *head, int amount);

int main(){
	
	srand(time(NULL));
	int n = 3 + rand() % 5;
	int k = 1 + rand () % (n*n); 
	int i, j;
	int **mat;
	NODE *head = NULL;
	NODE *curr;
	
	mat = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++)
		mat[i] = (int*)malloc(n*sizeof(int));
		
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			mat[i][j] = 1 + rand() % 100;
		}
	}
	
	printf("Matrix\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("K= %d\n", k);
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			head = matrixToLinkedList(head, mat[i][j]);
		}
	}
	curr = head;
	i=0;
	while(i<k){
		curr = curr->next;
		i++;
	}
		
	printf("%dth smallest element is %d!", k, curr->value);
	
	return 0;
}

NODE* matrixToLinkedList(NODE *head, int amount){
	
	NODE *newNode;
	NODE *curr;
	if(head == NULL){
		head = (NODE*)malloc(sizeof(NODE));
		head->value = amount;
		head->next = NULL;
		return head;
	}else if(amount <= head->value){
		newNode = (NODE*)malloc(sizeof(NODE));
		newNode->value = amount;
		newNode->next = head;
		return newNode;
	}else{
		curr = head;
		while(curr->next != NULL && amount > curr->next->value)
			curr = curr->next;
		newNode = (NODE*)malloc(sizeof(NODE));
		newNode->value = amount;
		newNode->next = curr->next;
		curr->next = newNode;
		return head;
	}
	
}



