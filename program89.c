//Using typedef 

#include<stdio.h>
#include<stdlib.h>

//Structre declaration

struct node
{
	int data;				//4 byte
	struct node *next;		//8	byte

};

typedef struct node NODE;

int main()
{
	//Static memory allocation
	NODE obj;

	//Dynamic memory allocation
	NODE *ptr = (NODE *)malloc(sizeof(NODE));

	obj.data = 11;		//Direct accessing operator.
	obj.next = NULL;

	ptr -> data =11;	//Indirect accessing operator -> 
	ptr -> next = NULL;

	return 0;
}