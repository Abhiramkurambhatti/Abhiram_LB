//Using typedef with difrent method 

#include<stdio.h>
#include<stdlib.h>

//Structre declaration

struct node
{
	int data;				//4 byte
	struct node *next;		//8	byte

};

//Self refrential statment, typedef <-Interview Quetion  

typedef struct node NODE;
typedef struct node * PNODE;

// Juna nav 		Navin nav
//Struct node   	NODE
//Struct node * 	PNODE


int main()
{
	//Static memory allocation
	NODE obj;

	//Dynamic memory allocation
	PNODE = (PNODE)malloc(sizeof(NODE));

	obj.data = 11;		//Direct accessing operator.
	obj.next = NULL;

	ptr -> data =11;	//Indirect accessing operator -> 
	ptr -> next = NULL;

	return 0;
}