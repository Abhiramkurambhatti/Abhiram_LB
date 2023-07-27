/*
	InsertFirst
	InsertLast
	InsertAtPos

	DeleteFirst
	DeleteLast 
	DeletePos
	
	Display
	Count
*/

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
typedef struct node ** PPNODE;

// Juna nav 		Navin nav
//Struct node   	NODE
//Struct node * 	PNODE
//Struct node ** 	PPNODE

/*
	1: Allocate the memory for node
	2: Intialize the node
	3: Check whether LL is empty or not
	4: if LL is empty the new node is the first node
	5: if LL contains atleast one node in it then store the address of previous first node in the next pointer of new node.

*/

void InsertFirst(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));

	newn -> data = iNo;
	newn -> next = NULL;

	if (*Head == NULL)		//if LL is empty
	{
		*Head = newn;
	}
	else					// if LL contains atleast one node
	{
		newn -> next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d\t",Head -> data);
		Head = Head -> next;
	}
	printf("\n");
}


int main()
{
	PNODE First = NULL;		// struct node * First = NULL;

	InsertFirst(&First,101);
	InsertFirst(&First,51);
	InsertFirst(&First,21);
	InsertFirst(&First,11);

	Display(Head);
	return 0;
}


/*
Rules:
	1.Use only dynamic memory allocations
	2.Don't write any technical syntax in main
	3.Don't use only global variables
	4.Be careful while maipulating the first pointer
	5.Pass the first pointer directly if the is not going to modify the LL (Display,Count)
	6.Pass the adress of the First pointer directly if the is going to modify the LL (InsertFirst, InsertLast,InsertAtPos,DeleteFirst,DeleteLast,DeletePos,Display,Count)
	


*/	