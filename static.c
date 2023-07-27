#include<stdio.h>


int no; //Global variable (beacuse it is out side the block, and here auto keyword is not allowed); 

void fun()
{
	auto int i =10;
	i++;
	printf("Value of i form fun is : %d\n",i);
}

void gun()
{
	static int i= 10;
	i++;
	printf("Value of i form gun is : %d\n",i);
}

int main()
{
	printf("Inside main \n"); 

	fun(); //Function call
	fun();
	fun();

	gun(); //Function call
	gun();
	gun();
	return 0;

}