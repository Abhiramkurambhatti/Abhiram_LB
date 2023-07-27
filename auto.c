#include<stdio.h>

int no; //Global variable (beacuse it is out side the block, and here auto keyword is not allowed); 

void fun()
{
	int i = 11;
	int j; 
	auto int k;			// auto storage class;
	auto int l = 11;
}

void gun()
{
	register int x = 11; // register storage class(e.g:- apan requst kartoy processor chya register la jar jaga asel tar reg dya ani store kara, nasel tar no problem);
	register int y;
}

int main()
{
	printf("Inside main \n"); 

	fun(); //Function call
	

	gun(); //Function call
	
	return 0;

}